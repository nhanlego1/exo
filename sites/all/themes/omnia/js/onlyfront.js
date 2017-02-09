/**
 * Created by HAUTRUONG on 11/27/2016.
 */
;(function ($, window) {
    $('document').ready(function() {
        var ytControl = $('.youtube-video-full-screen');
        if(ytControl) {
            var ytID = $(ytControl).data('video-id') || 'SusODOOmM94';
            var options = { videoId: ytID };
            $('.youtube-video-full-screen').tubular(options);
            // f-UGhWj1xww cool sepia hd
            // 49SKbS7Xwf4 beautiful barn sepia
        }
    });
})(jQuery,window);