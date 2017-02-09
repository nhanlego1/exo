(function($) {
  Drupal.behaviors.tubular = {
    attach: function(context) {
      $('body').tubular(Drupal.settings.tubular.videoID, Drupal.settings.tubular.wrapperID);
      
      // Play/Pause
      $('.videoPause').click(function(e) {
        e.preventDefault();
        if (ytplayer.getPlayerState() == 2) { //2 is paused state
          ytplayer.playVideo();
        } else {
          ytplayer.pauseVideo();
        }
        return false;
      });
      
      // Mute/Unmute
      $('.videoMute').click(function(e) {
        e.preventDefault();
        if (ytplayer.isMuted()) {
          ytplayer.unMute();
        } else {
          ytplayer.mute();
        }
        return false;
      });
      
      // Stop
      $('.videoStop').click(function(e) {
        e.preventDefault();
        ytplayer.stopVideo();
        ytplayer.clearVideo();
        $('#yt-container').hide();
        return false;
      });
    }
  }
})(jQuery);