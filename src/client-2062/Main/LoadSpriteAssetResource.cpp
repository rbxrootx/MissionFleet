// Reconstructed from FUN_100ffc40 Ghidra pseudocode and disassembly.
// This stateful resource loader handles file parsing, sprite/effect records,
// and engine callback paths; direct call destinations are checked by the verifier.
extern "C" void AllocateObjectThunk();
extern "C" void AttachByLayer();
extern "C" void AttachControlList();
extern "C" void CreateFullScreenControl();
extern "C" void CreateLogoControl();
extern "C" void CreateOverlayControl();
extern "C" void FUN_10001000();
extern "C" void FUN_100010c0();
extern "C" void FUN_100010e0();
extern "C" void FUN_10001140();
extern "C" void FUN_10001200();
extern "C" void FUN_10001360();
extern "C" void FUN_10001380();
extern "C" void FUN_10001470();
extern "C" void FUN_10001490();
extern "C" void FUN_10001530();
extern "C" void FUN_10001560();
extern "C" void FUN_100015c0();
extern "C" void FUN_100015f0();
extern "C" void FUN_10001be0();
extern "C" void FUN_10002100();
extern "C" void FUN_10002200();
extern "C" void FUN_10002220();
extern "C" void FUN_10002e40();
extern "C" void FUN_10002ec0();
extern "C" void FUN_10002ee0();
extern "C" void FUN_100033a0();
extern "C" void FUN_100039e0();
extern "C" void FUN_10003d60();
extern "C" void FUN_10003fb0();
extern "C" void FUN_10004000();
extern "C" void FUN_10004100();
extern "C" void FUN_10004180();
extern "C" void FUN_10004280();
extern "C" void FUN_10004320();
extern "C" void FUN_10004780();
extern "C" void FUN_10004cc0();
extern "C" void FUN_10005100();
extern "C" void FUN_100051e0();
extern "C" void FUN_10005470();
extern "C" void FUN_10005550();
extern "C" void FUN_100055b0();
extern "C" void FUN_10005630();
extern "C" void FUN_10005a90();
extern "C" void FUN_10005b10();
extern "C" void FUN_10005b80();
extern "C" void FUN_10005c00();
extern "C" void FUN_10006780();
extern "C" void FUN_100067a0();
extern "C" void FUN_100069f0();
extern "C" void FUN_10007a80();
extern "C" void FUN_10008a00();
extern "C" void FUN_10008e50();
extern "C" void FUN_100098c0();
extern "C" void FUN_10009cf0();
extern "C" void FUN_10009df0();
extern "C" void FUN_1000a100();
extern "C" void FUN_1000a260();
extern "C" void FUN_1000a510();
extern "C" void FUN_1000a830();
extern "C" void FUN_1000a8f0();
extern "C" void FUN_1000a910();
extern "C" void FUN_1000a920();
extern "C" void FUN_1000ab10();
extern "C" void FUN_1000ac60();
extern "C" void FUN_1000b530();
extern "C" void FUN_1000bec0();
extern "C" void FUN_1000c060();
extern "C" void FUN_1000c150();
extern "C" void FUN_1000c170();
extern "C" void FUN_1000c350();
extern "C" void FUN_1000c3b0();
extern "C" void FUN_1000c3d0();
extern "C" void FUN_1000c5f0();
extern "C" void FUN_1000c610();
extern "C" void FUN_1000cc30();
extern "C" void FUN_1000ce40();
extern "C" void FUN_1000cfa0();
extern "C" void FUN_1000cfc0();
extern "C" void FUN_1000cff0();
extern "C" void FUN_1000d020();
extern "C" void FUN_1000d280();
extern "C" void FUN_1000d320();
extern "C" void FUN_1000d340();
extern "C" void FUN_1000d350();
extern "C" void FUN_1000d660();
extern "C" void FUN_1000d700();
extern "C" void FUN_1000d7f0();
extern "C" void FUN_1000d860();
extern "C" void FUN_1000d880();
extern "C" void FUN_1000d890();
extern "C" void FUN_1000d8c0();
extern "C" void FUN_1000d9c0();
extern "C" void FUN_1000d9e0();
extern "C" void FUN_1000d9f0();
extern "C" void FUN_1000da30();
extern "C" void FUN_1000def0();
extern "C" void FUN_1000e1d0();
extern "C" void FUN_1000e210();
extern "C" void FUN_1000e380();
extern "C" void FUN_1000e3a0();
extern "C" void FUN_1000e400();
extern "C" void FUN_1000ea60();
extern "C" void FUN_1000eb20();
extern "C" void FUN_1000f330();
extern "C" void FUN_1000f350();
extern "C" void FUN_1000f480();
extern "C" void FUN_100107b0();
extern "C" void FUN_10010900();
extern "C" void FUN_10010920();
extern "C" void FUN_10010990();
extern "C" void FUN_100109b0();
extern "C" void FUN_10010b40();
extern "C" void FUN_10010b60();
extern "C" void FUN_100117c0();
extern "C" void FUN_10011850();
extern "C" void FUN_100118a0();
extern "C" void FUN_100118c0();
extern "C" void FUN_10011a60();
extern "C" void FUN_10011a80();
extern "C" void FUN_100122f0();
extern "C" void FUN_10012460();
extern "C" void FUN_10012610();
extern "C" void FUN_10012810();
extern "C" void FUN_10012830();
extern "C" void FUN_10012870();
extern "C" void FUN_100128b0();
extern "C" void FUN_100128e0();
extern "C" void FUN_10012920();
extern "C" void FUN_10012950();
extern "C" void FUN_10012a60();
extern "C" void FUN_10012d00();
extern "C" void FUN_10012d40();
extern "C" void FUN_10012d80();
extern "C" void FUN_10012fc0();
extern "C" void FUN_10012ff0();
extern "C" void FUN_10013060();
extern "C" void FUN_10013090();
extern "C" void FUN_100130d0();
extern "C" void FUN_10013100();
extern "C" void FUN_10013140();
extern "C" void FUN_10013170();
extern "C" void FUN_100131b0();
extern "C" void FUN_100131d0();
extern "C" void FUN_10013210();
extern "C" void FUN_10013300();
extern "C" void FUN_10013680();
extern "C" void FUN_10013750();
extern "C" void FUN_10013800();
extern "C" void FUN_10013ab0();
extern "C" void FUN_10014220();
extern "C" void FUN_10014480();
extern "C" void FUN_100144a0();
extern "C" void FUN_10014520();
extern "C" void FUN_10014650();
extern "C" void FUN_10014710();
extern "C" void FUN_10014820();
extern "C" void FUN_10014a20();
extern "C" void FUN_10014a80();
extern "C" void FUN_10014b40();
extern "C" void FUN_10014c20();
extern "C" void FUN_10014c40();
extern "C" void FUN_10014cb0();
extern "C" void FUN_10014d20();
extern "C" void FUN_10014d70();
extern "C" void FUN_10014dc0();
extern "C" void FUN_10014de0();
extern "C" void FUN_10014e70();
extern "C" void FUN_10014eb0();
extern "C" void FUN_10015380();
extern "C" void FUN_100153a0();
extern "C" void FUN_100154d0();
extern "C" void FUN_10015620();
extern "C" void FUN_10015710();
extern "C" void FUN_10015a70();
extern "C" void FUN_10015ae0();
extern "C" void FUN_10015b00();
extern "C" void FUN_10015b40();
extern "C" void FUN_10015bf0();
extern "C" void FUN_10015c20();
extern "C" void FUN_10015cc0();
extern "C" void FUN_10015ce0();
extern "C" void FUN_10015cf0();
extern "C" void FUN_10015d70();
extern "C" void FUN_10015ee0();
extern "C" void FUN_10015f00();
extern "C" void FUN_10015f70();
extern "C" void FUN_10016050();
extern "C" void FUN_100160f0();
extern "C" void FUN_10016280();
extern "C" void FUN_10016500();
extern "C" void FUN_10016560();
extern "C" void FUN_10016760();
extern "C" void FUN_10016930();
extern "C" void FUN_10016b50();
extern "C" void FUN_10016b70();
extern "C" void FUN_10016bf0();
extern "C" void FUN_10016e10();
extern "C" void FUN_10016f10();
extern "C" void FUN_100172c0();
extern "C" void FUN_10017420();
extern "C" void FUN_10017440();
extern "C" void FUN_100174b0();
extern "C" void FUN_100176c0();
extern "C" void FUN_100178b0();
extern "C" void FUN_100178e0();
extern "C" void FUN_10017900();
extern "C" void FUN_10017980();
extern "C" void FUN_10017a40();
extern "C" void FUN_10017a80();
extern "C" void FUN_10017aa0();
extern "C" void FUN_10017b30();
extern "C" void FUN_10017bb0();
extern "C" void FUN_10017df0();
extern "C" void FUN_10017f40();
extern "C" void FUN_10017f60();
extern "C" void FUN_10017fc0();
extern "C" void FUN_100181d0();
extern "C" void FUN_10018390();
extern "C" void FUN_100183b0();
extern "C" void FUN_100183c0();
extern "C" void FUN_100185d0();
extern "C" void FUN_10018600();
extern "C" void FUN_100186d0();
extern "C" void FUN_100186f0();
extern "C" void FUN_10018760();
extern "C" void FUN_10018840();
extern "C" void FUN_100188b0();
extern "C" void FUN_100188c0();
extern "C" void FUN_100188e0();
extern "C" void FUN_100188f0();
extern "C" void FUN_10018950();
extern "C" void FUN_10018b90();
extern "C" void FUN_10018bb0();
extern "C" void FUN_1001bda0();
extern "C" void FUN_1001bdc0();
extern "C" void FUN_1001be80();
extern "C" void FUN_1001bf10();
extern "C" void FUN_1001c040();
extern "C" void FUN_1001c060();
extern "C" void FUN_1001cc80();
extern "C" void FUN_1001ce40();
extern "C" void FUN_1001ce50();
extern "C" void FUN_1001d3c0();
extern "C" void FUN_1001d3e0();
extern "C" void FUN_1001d4d0();
extern "C" void FUN_1001d510();
extern "C" void FUN_1001d690();
extern "C" void FUN_1001d710();
extern "C" void FUN_1001d770();
extern "C" void FUN_1001d870();
extern "C" void FUN_1001dab0();
extern "C" void FUN_10020760();
extern "C" void FUN_10021160();
extern "C" void FUN_10021260();
extern "C" void FUN_100212c0();
extern "C" void FUN_10021730();
extern "C" void FUN_100218d0();
extern "C" void FUN_10021900();
extern "C" void FUN_10021a00();
extern "C" void FUN_10021a20();
extern "C" void FUN_10021a30();
extern "C" void FUN_10021cd0();
extern "C" void FUN_10021d30();
extern "C" void FUN_10021de0();
extern "C" void FUN_10021e20();
extern "C" void FUN_10021e40();
extern "C" void FUN_10021ed0();
extern "C" void FUN_10021f40();
extern "C" void FUN_10022080();
extern "C" void FUN_100221c0();
extern "C" void FUN_10022300();
extern "C" void FUN_100223d0();
extern "C" void FUN_10022510();
extern "C" void FUN_10022530();
extern "C" void FUN_10022590();
extern "C" void FUN_10022940();
extern "C" void FUN_10022b90();
extern "C" void FUN_10022c00();
extern "C" void FUN_10022ca0();
extern "C" void FUN_10022d40();
extern "C" void FUN_10022e30();
extern "C" void FUN_10022eb0();
extern "C" void FUN_10022ed0();
extern "C" void FUN_10022ee0();
extern "C" void FUN_10022f80();
extern "C" void FUN_10023030();
extern "C" void FUN_10023050();
extern "C" void FUN_10023060();
extern "C" void FUN_10023290();
extern "C" void FUN_10023330();
extern "C" void FUN_10023350();
extern "C" void FUN_10023360();
extern "C" void FUN_10023580();
extern "C" void FUN_10023600();
extern "C" void FUN_10023620();
extern "C" void FUN_100236f0();
extern "C" void FUN_10023880();
extern "C" void FUN_100238e0();
extern "C" void FUN_100239b0();
extern "C" void FUN_10023a70();
extern "C" void FUN_10023f70();
extern "C" void FUN_10024040();
extern "C" void FUN_10024140();
extern "C" void FUN_100241f0();
extern "C" void FUN_10024320();
extern "C" void FUN_10024350();
extern "C" void FUN_100245b0();
extern "C" void FUN_10024650();
extern "C" void FUN_10024690();
extern "C" void FUN_100246e0();
extern "C" void FUN_10024860();
extern "C" void FUN_10024e10();
extern "C" void FUN_10024e60();
extern "C" void FUN_10024ec0();
extern "C" void FUN_10024f20();
extern "C" void FUN_10024f80();
extern "C" void FUN_10024fe0();
extern "C" void FUN_10025040();
extern "C" void FUN_100250a0();
extern "C" void FUN_10025100();
extern "C" void FUN_10025160();
extern "C" void FUN_100251c0();
extern "C" void FUN_10025220();
extern "C" void FUN_10025330();
extern "C" void FUN_10025630();
extern "C" void FUN_100256a0();
extern "C" void FUN_10025950();
extern "C" void FUN_10025b10();
extern "C" void FUN_10026970();
extern "C" void FUN_10026990();
extern "C" void FUN_10026c20();
extern "C" void FUN_10026cc0();
extern "C" void FUN_100278e0();
extern "C" void FUN_10027cc0();
extern "C" void FUN_100280d0();
extern "C" void FUN_100282b0();
extern "C" void FUN_10028550();
extern "C" void FUN_10028930();
extern "C" void FUN_10028950();
extern "C" void FUN_10028a50();
extern "C" void FUN_10028b10();
extern "C" void FUN_10028b50();
extern "C" void FUN_10028d80();
extern "C" void FUN_10029080();
extern "C" void FUN_10029130();
extern "C" void FUN_100291b0();
extern "C" void FUN_10029290();
extern "C" void FUN_100292e0();
extern "C" void FUN_10029360();
extern "C" void FUN_10029630();
extern "C" void FUN_100296e0();
extern "C" void FUN_10029730();
extern "C" void FUN_100297f0();
extern "C" void FUN_10029810();
extern "C" void FUN_10029820();
extern "C" void FUN_100298b0();
extern "C" void FUN_10029920();
extern "C" void FUN_10029950();
extern "C" void FUN_10029ae0();
extern "C" void FUN_10029b00();
extern "C" void FUN_10029b60();
extern "C" void FUN_10029d30();
extern "C" void FUN_10029df0();
extern "C" void FUN_10029e10();
extern "C" void FUN_10029e20();
extern "C" void FUN_10029e90();
extern "C" void FUN_10029ed0();
extern "C" void FUN_10029ee0();
extern "C" void FUN_10029f60();
extern "C" void FUN_1002a090();
extern "C" void FUN_1002a0b0();
extern "C" void FUN_1002a110();
extern "C" void FUN_1002a2f0();
extern "C" void FUN_1002a320();
extern "C" void FUN_1002a350();
extern "C" void FUN_1002a3b0();
extern "C" void FUN_1002a430();
extern "C" void FUN_1002a450();
extern "C" void FUN_1002a670();
extern "C" void FUN_1002a690();
extern "C" void FUN_1002a6a0();
extern "C" void FUN_1002a780();
extern "C" void FUN_1002a8f0();
extern "C" void FUN_1002a910();
extern "C" void FUN_1002a980();
extern "C" void FUN_1002aa80();
extern "C" void FUN_1002abc0();
extern "C" void FUN_1002ada0();
extern "C" void FUN_1002adc0();
extern "C" void FUN_1002b080();
extern "C" void FUN_1002ba90();
extern "C" void FUN_1002bad0();
extern "C" void FUN_1002bb70();
extern "C" void FUN_1002bbd0();
extern "C" void FUN_1002bc20();
extern "C" void FUN_1002bc50();
extern "C" void FUN_1002bce0();
extern "C" void FUN_1002be60();
extern "C" void FUN_1002bec0();
extern "C" void FUN_1002bf20();
extern "C" void FUN_1002bf80();
extern "C" void FUN_1002bfa0();
extern "C" void FUN_1002c010();
extern "C" void FUN_1002c080();
extern "C" void FUN_1002c180();
extern "C" void FUN_1002c1c0();
extern "C" void FUN_1002c1d0();
extern "C" void FUN_1002c200();
extern "C" void FUN_1002c250();
extern "C" void FUN_1002c290();
extern "C" void FUN_1002c2f0();
extern "C" void FUN_1002c340();
extern "C" void FUN_1002c360();
extern "C" void FUN_1002ce90();
extern "C" void FUN_1002ceb0();
extern "C" void FUN_1002d050();
extern "C" void FUN_1002d420();
extern "C" void FUN_1002d870();
extern "C" void FUN_1002d9a0();
extern "C" void FUN_1002f090();
extern "C" void FUN_1002f1a0();
extern "C" void FUN_1002f310();
extern "C" void FUN_1002fc10();
extern "C" void FUN_1002fe00();
extern "C" void FUN_1002ffb0();
extern "C" void FUN_10030000();
extern "C" void FUN_100300f0();
extern "C" void FUN_100308c0();
extern "C" void FUN_10030a30();
extern "C" void FUN_10030ee0();
extern "C" void FUN_100312d0();
extern "C" void FUN_10031680();
extern "C" void FUN_10031af0();
extern "C" void FUN_10031b30();
extern "C" void FUN_100322a0();
extern "C" void FUN_10032360();
extern "C" void FUN_10032400();
extern "C" void FUN_10032420();
extern "C" void FUN_100324a0();
extern "C" void FUN_10032500();
extern "C" void FUN_100325c0();
extern "C" void FUN_100325d0();
extern "C" void FUN_100325e0();
extern "C" void FUN_100325f0();
extern "C" void FUN_10032650();
extern "C" void FUN_100326b0();
extern "C" void FUN_100328a0();
extern "C" void FUN_100328c0();
extern "C" void FUN_10032930();
extern "C" void FUN_10032ac0();
extern "C" void FUN_10032ce0();
extern "C" void FUN_10032e90();
extern "C" void FUN_10032ed0();
extern "C" void FUN_10032f40();
extern "C" void FUN_10032f80();
extern "C" void FUN_10032fd0();
extern "C" void FUN_10033080();
extern "C" void FUN_100330f0();
extern "C" void FUN_10033110();
extern "C" void FUN_10033200();
extern "C" void FUN_10033220();
extern "C" void FUN_10033230();
extern "C" void FUN_10033310();
extern "C" void FUN_100335f0();
extern "C" void FUN_10033a60();
extern "C" void FUN_10033a70();
extern "C" void FUN_100341a0();
extern "C" void FUN_100348b0();
extern "C" void FUN_100348f0();
extern "C" void FUN_10034960();
extern "C" void FUN_10034980();
extern "C" void FUN_10034990();
extern "C" void FUN_10034b10();
extern "C" void FUN_10036270();
extern "C" void FUN_10036290();
extern "C" void FUN_100365d0();
extern "C" void FUN_10038170();
extern "C" void FUN_10038230();
extern "C" void FUN_10038580();
extern "C" void FUN_100386c0();
extern "C" void FUN_1003b2e0();
extern "C" void FUN_1003b2f0();
extern "C" void FUN_1003b380();
extern "C" void FUN_1003b580();
extern "C" void FUN_1003b830();
extern "C" void FUN_1003b8a0();
extern "C" void FUN_1003c430();
extern "C" void FUN_1003d620();
extern "C" void FUN_1003d7a0();
extern "C" void FUN_1003d7d0();
extern "C" void FUN_1003d9f0();
extern "C" void FUN_1003de80();
extern "C" void FUN_1003dea0();
extern "C" void FUN_1003df70();
extern "C" void FUN_1003e070();
extern "C" void FUN_1003e1f0();
extern "C" void FUN_1003e220();
extern "C" void FUN_1003e290();
extern "C" void FUN_1003f000();
extern "C" void FUN_1003f700();
extern "C" void FUN_100401f0();
extern "C" void FUN_100402c0();
extern "C" void FUN_100402e0();
extern "C" void FUN_10040460();
extern "C" void FUN_100404a0();
extern "C" void FUN_100405d0();
extern "C" void FUN_100405f0();
extern "C" void FUN_10040600();
extern "C" void FUN_10040640();
extern "C" void FUN_10041460();
extern "C" void FUN_10041480();
extern "C" void FUN_10041720();
extern "C" void FUN_10041960();
extern "C" void FUN_10041a70();
extern "C" void FUN_10041bc0();
extern "C" void FUN_10041c80();
extern "C" void FUN_10041d10();
extern "C" void FUN_10041d30();
extern "C" void FUN_10041d60();
extern "C" void FUN_10041d90();
extern "C" void FUN_10041db0();
extern "C" void FUN_10042060();
extern "C" void FUN_10042080();
extern "C" void FUN_100420b0();
extern "C" void FUN_100420e0();
extern "C" void FUN_10042200();
extern "C" void FUN_10042410();
extern "C" void FUN_10042560();
extern "C" void FUN_100425b0();
extern "C" void FUN_100425f0();
extern "C" void FUN_10042640();
extern "C" void FUN_10042680();
extern "C" void FUN_10042780();
extern "C" void FUN_10042960();
extern "C" void FUN_10042a80();
extern "C" void FUN_10042ad0();
extern "C" void FUN_10042c50();
extern "C" void FUN_10042c60();
extern "C" void FUN_10042c70();
extern "C" void FUN_10042c80();
extern "C" void FUN_10042d30();
extern "C" void FUN_10042f00();
extern "C" void FUN_10042f20();
extern "C" void FUN_10042fa0();
extern "C" void FUN_10042fe0();
extern "C" void FUN_10043070();
extern "C" void FUN_100430b0();
extern "C" void FUN_10043190();
extern "C" void FUN_10043290();
extern "C" void FUN_10043350();
extern "C" void FUN_10043380();
extern "C" void FUN_10043400();
extern "C" void FUN_100434b0();
extern "C" void FUN_10043520();
extern "C" void FUN_100436b0();
extern "C" void FUN_100436e0();
extern "C" void FUN_10043750();
extern "C" void FUN_10043790();
extern "C" void FUN_100437c0();
extern "C" void FUN_100438c0();
extern "C" void FUN_100438d0();
extern "C" void FUN_100438f0();
extern "C" void FUN_10043a10();
extern "C" void FUN_10043a20();
extern "C" void FUN_10043c60();
extern "C" void FUN_10043cc0();
extern "C" void FUN_10043ce0();
extern "C" void FUN_10043d10();
extern "C" void FUN_10043e50();
extern "C" void FUN_10043e70();
extern "C" void FUN_10043ee0();
extern "C" void FUN_10044790();
extern "C" void FUN_10044a40();
extern "C" void FUN_10044aa0();
extern "C" void FUN_10044b50();
extern "C" void FUN_10044c40();
extern "C" void FUN_10044cf0();
extern "C" void FUN_10044db0();
extern "C" void FUN_100452c0();
extern "C" void FUN_10045970();
extern "C" void FUN_100459f0();
extern "C" void FUN_10045b90();
extern "C" void FUN_10045bb0();
extern "C" void FUN_10046090();
extern "C" void FUN_10046100();
extern "C" void FUN_10046120();
extern "C" void FUN_10046130();
extern "C" void FUN_10046460();
extern "C" void FUN_10046ad0();
extern "C" void FUN_10046ba0();
extern "C" void FUN_10046c20();
extern "C" void FUN_10046ea0();
extern "C" void FUN_10047000();
extern "C" void FUN_10047020();
extern "C" void FUN_10047520();
extern "C" void FUN_10047550();
extern "C" void FUN_100475e0();
extern "C" void FUN_10047600();
extern "C" void FUN_10047670();
extern "C" void FUN_100476b0();
extern "C" void FUN_100476f0();
extern "C" void FUN_10047700();
extern "C" void FUN_10047740();
extern "C" void FUN_10047760();
extern "C" void FUN_10047770();
extern "C" void FUN_10047950();
extern "C" void FUN_10047a40();
extern "C" void FUN_10047a60();
extern "C" void FUN_10047a70();
extern "C" void FUN_10047a90();
extern "C" void FUN_10047c90();
extern "C" void FUN_10047ce0();
extern "C" void FUN_10047d90();
extern "C" void FUN_10047db0();
extern "C" void FUN_10047dc0();
extern "C" void FUN_10047f60();
extern "C" void FUN_10047f80();
extern "C" void FUN_10047f90();
extern "C" void FUN_10048050();
extern "C" void FUN_10048070();
extern "C" void FUN_100480a0();
extern "C" void FUN_100480c0();
extern "C" void FUN_10048160();
extern "C" void FUN_100482c0();
extern "C" void FUN_10048340();
extern "C" void FUN_100484d0();
extern "C" void FUN_10048640();
extern "C" void FUN_10048660();
extern "C" void FUN_10048770();
extern "C" void FUN_100487d0();
extern "C" void FUN_10048870();
extern "C" void FUN_10048900();
extern "C" void FUN_10048960();
extern "C" void FUN_10048980();
extern "C" void FUN_10048990();
extern "C" void FUN_10048a20();
extern "C" void FUN_10048a90();
extern "C" void FUN_10048af0();
extern "C" void FUN_10048b10();
extern "C" void FUN_10048b60();
extern "C" void FUN_1004c870();
extern "C" void FUN_1004c8b0();
extern "C" void FUN_1004c920();
extern "C" void FUN_1004c980();
extern "C" void FUN_1004ca40();
extern "C" void FUN_1004ca90();
extern "C" void FUN_1004cad0();
extern "C" void FUN_1004cb00();
extern "C" void FUN_1004cb20();
extern "C" void FUN_1004cb40();
extern "C" void FUN_1004cbd0();
extern "C" void FUN_1004cc00();
extern "C" void FUN_1004cc30();
extern "C" void FUN_1004cc60();
extern "C" void FUN_1004cc80();
extern "C" void FUN_1004cca0();
extern "C" void FUN_1004cf80();
extern "C" void FUN_1004d0d0();
extern "C" void FUN_1004d1a0();
extern "C" void FUN_1004d1c0();
extern "C" void FUN_1004d1e0();
extern "C" void FUN_1004d230();
extern "C" void FUN_1004d380();
extern "C" void FUN_1004d3f0();
extern "C" void FUN_1004d430();
extern "C" void FUN_1004d490();
extern "C" void FUN_1004d4d0();
extern "C" void FUN_1004d540();
extern "C" void FUN_1004d580();
extern "C" void FUN_1004d5f0();
extern "C" void FUN_1004d6a0();
extern "C" void FUN_1004d6e0();
extern "C" void FUN_1004d700();
extern "C" void FUN_1004d760();
extern "C" void FUN_1004d7d0();
extern "C" void FUN_1004d8e0();
extern "C" void FUN_1004db50();
extern "C" void FUN_1004e0e0();
extern "C" void FUN_1004e100();
extern "C" void FUN_1004e580();
extern "C" void FUN_1004e5a0();
extern "C" void FUN_1004e5b0();
extern "C" void FUN_1004e660();
extern "C" void FUN_1004e6c0();
extern "C" void FUN_1004e6e0();
extern "C" void FUN_1004e6f0();
extern "C" void FUN_1004e7c0();
extern "C" void FUN_1004e7e0();
extern "C" void FUN_1004e860();
extern "C" void FUN_1004e920();
extern "C" void FUN_1004ea60();
extern "C" void FUN_1004ead0();
extern "C" void FUN_1004eca0();
extern "C" void FUN_1004ece0();
extern "C" void FUN_1004ed20();
extern "C" void FUN_1004ee10();
extern "C" void FUN_1004ef20();
extern "C" void FUN_1004ef40();
extern "C" void FUN_1004efc0();
extern "C" void FUN_1004f270();
extern "C" void FUN_1004f350();
extern "C" void FUN_1004f430();
extern "C" void FUN_1004f470();
extern "C" void FUN_1004f4c0();
extern "C" void FUN_1004f530();
extern "C" void FUN_1004f5c0();
extern "C" void FUN_1004f5e0();
extern "C" void FUN_1004f5f0();
extern "C" void FUN_1004f680();
extern "C" void FUN_1004f820();
extern "C" void FUN_100506e0();
extern "C" void FUN_10050700();
extern "C" void FUN_10051780();
extern "C" void FUN_10052550();
extern "C" void FUN_100529d0();
extern "C" void FUN_10052a90();
extern "C" void FUN_10052aa0();
extern "C" void FUN_10052c20();
extern "C" void FUN_10052ce0();
extern "C" void FUN_10052dc0();
extern "C" void FUN_10053130();
extern "C" void FUN_100533d0();
extern "C" void FUN_10053440();
extern "C" void FUN_100534f0();
extern "C" void FUN_100537a0();
extern "C" void FUN_10053900();
extern "C" void FUN_10053a80();
extern "C" void FUN_10053c20();
extern "C" void FUN_10053cf0();
extern "C" void FUN_10053d60();
extern "C" void FUN_10053e70();
extern "C" void FUN_10053eb0();
extern "C" void FUN_10053f20();
extern "C" void FUN_10054320();
extern "C" void FUN_10054340();
extern "C" void FUN_100544c0();
extern "C" void FUN_100547c0();
extern "C" void FUN_100548b0();
extern "C" void FUN_100548c0();
extern "C" void FUN_10054a10();
extern "C" void FUN_10054a20();
extern "C" void FUN_10054ff0();
extern "C" void FUN_10055330();
extern "C" void FUN_10055360();
extern "C" void FUN_100554c0();
extern "C" void FUN_100557f0();
extern "C" void FUN_10055870();
extern "C" void FUN_10055b80();
extern "C" void FUN_10055c30();
extern "C" void FUN_10055c90();
extern "C" void FUN_10055d30();
extern "C" void FUN_10055d40();
extern "C" void FUN_10055d90();
extern "C" void FUN_10055e10();
extern "C" void FUN_10055e70();
extern "C" void FUN_10056300();
extern "C" void FUN_10056700();
extern "C" void FUN_100567d0();
extern "C" void FUN_100567f0();
extern "C" void FUN_10056830();
extern "C" void FUN_10056910();
extern "C" void FUN_10058210();
extern "C" void FUN_10058230();
extern "C" void FUN_1005a8d0();
extern "C" void FUN_1005a9d0();
extern "C" void FUN_1005afe0();
extern "C" void FUN_1005ccb0();
extern "C" void FUN_1005cd80();
extern "C" void FUN_1005cf80();
extern "C" void FUN_1005d150();
extern "C" void FUN_1005d2f0();
extern "C" void FUN_1005d380();
extern "C" void FUN_1005d3c0();
extern "C" void FUN_1005d440();
extern "C" void FUN_1005d640();
extern "C" void FUN_1005d730();
extern "C" void FUN_1005d760();
extern "C" void FUN_1005d850();
extern "C" void FUN_1005da80();
extern "C" void FUN_1005de00();
extern "C" void FUN_1005de90();
extern "C" void FUN_1005df80();
extern "C" void FUN_1005e060();
extern "C" void FUN_1005e0f0();
extern "C" void FUN_1005e200();
extern "C" void FUN_1005e420();
extern "C" void FUN_1005f1f0();
extern "C" void FUN_1005f400();
extern "C" void FUN_1005f610();
extern "C" void FUN_100601d0();
extern "C" void FUN_100602a0();
extern "C" void FUN_100609f0();
extern "C" void FUN_10060a50();
extern "C" void FUN_10060ab0();
extern "C" void FUN_10060ad0();
extern "C" void FUN_10060cf0();
extern "C" void FUN_10060dd0();
extern "C" void FUN_10060eb0();
extern "C" void FUN_10060f50();
extern "C" void FUN_10062f80();
extern "C" void FUN_10062fa0();
extern "C" void FUN_10063480();
extern "C" void FUN_10065070();
extern "C" void FUN_10065090();
extern "C" void FUN_10066a90();
extern "C" void FUN_10068d80();
extern "C" void FUN_1006a400();
extern "C" void FUN_1006a6f0();
extern "C" void FUN_1006a7c0();
extern "C" void FUN_1006a8d0();
extern "C" void FUN_1006ac60();
extern "C" void FUN_1006ad80();
extern "C" void FUN_1006ad90();
extern "C" void FUN_1006ade0();
extern "C" void FUN_1006b140();
extern "C" void FUN_1006b510();
extern "C" void FUN_1006b530();
extern "C" void FUN_1006b980();
extern "C" void FUN_1006be90();
extern "C" void FUN_1006bfb0();
extern "C" void FUN_1006c130();
extern "C" void FUN_1006c460();
extern "C" void FUN_1006c480();
extern "C" void FUN_1006c4a0();
extern "C" void FUN_1006c560();
extern "C" void FUN_1006c7a0();
extern "C" void FUN_1006ca40();
extern "C" void FUN_1006cb30();
extern "C" void FUN_1006dfd0();
extern "C" void FUN_1006e1e0();
extern "C" void FUN_1006e2d0();
extern "C" void FUN_1006eb10();
extern "C" void FUN_1006ec00();
extern "C" void FUN_1006ece0();
extern "C" void FUN_1006ed30();
extern "C" void FUN_1006ed60();
extern "C" void FUN_1006ed70();
extern "C" void FUN_1006ed80();
extern "C" void FUN_1006ef40();
extern "C" void FUN_1006f060();
extern "C" void FUN_1006f310();
extern "C" void FUN_1006f630();
extern "C" void FUN_1006f780();
extern "C" void FUN_1006fb50();
extern "C" void FUN_1006fdd0();
extern "C" void FUN_10070230();
extern "C" void FUN_10070330();
extern "C" void FUN_100708a0();
extern "C" void FUN_100708b0();
extern "C" void FUN_10070920();
extern "C" void FUN_10070930();
extern "C" void FUN_10071000();
extern "C" void FUN_10071040();
extern "C" void FUN_100713e0();
extern "C" void FUN_10071d70();
extern "C" void FUN_10071df0();
extern "C" void FUN_10071e60();
extern "C" void FUN_10072600();
extern "C" void FUN_10072620();
extern "C" void FUN_10072820();
extern "C" void FUN_10072840();
extern "C" void FUN_10072940();
extern "C" void FUN_10072a50();
extern "C" void FUN_10072dc0();
extern "C" void FUN_100737d0();
extern "C" void FUN_10073a70();
extern "C" void FUN_10073c20();
extern "C" void FUN_10073d30();
extern "C" void FUN_10073e50();
extern "C" void FUN_10074200();
extern "C" void FUN_10074370();
extern "C" void FUN_10074410();
extern "C" void FUN_10074710();
extern "C" void FUN_10074830();
extern "C" void FUN_100748d0();
extern "C" void FUN_10074a80();
extern "C" void FUN_10074be0();
extern "C" void FUN_10074c10();
extern "C" void FUN_10075880();
extern "C" void FUN_100758a0();
extern "C" void FUN_10075ac0();
extern "C" void FUN_10075e70();
extern "C" void FUN_10076190();
extern "C" void FUN_10076460();
extern "C" void FUN_10076590();
extern "C" void FUN_100765c0();
extern "C" void FUN_100767e0();
extern "C" void FUN_10076da0();
extern "C" void FUN_10076e30();
extern "C" void FUN_10077220();
extern "C" void FUN_10077250();
extern "C" void FUN_100772d0();
extern "C" void FUN_10077670();
extern "C" void FUN_10077710();
extern "C" void FUN_10077880();
extern "C" void FUN_10077970();
extern "C" void FUN_10077bc0();
extern "C" void FUN_10077e10();
extern "C" void FUN_10078360();
extern "C" void FUN_100786e0();
extern "C" void FUN_10078700();
extern "C" void FUN_10078c50();
extern "C" void FUN_10078ee0();
extern "C" void FUN_100790d0();
extern "C" void FUN_100790f0();
extern "C" void FUN_10079170();
extern "C" void FUN_100791b0();
extern "C" void FUN_10079210();
extern "C" void FUN_10079280();
extern "C" void FUN_10079350();
extern "C" void FUN_10079440();
extern "C" void FUN_1007af10();
extern "C" void FUN_1007af30();
extern "C" void FUN_1007b270();
extern "C" void FUN_1007b3c0();
extern "C" void FUN_1007b530();
extern "C" void FUN_1007c370();
extern "C" void FUN_1007ce20();
extern "C" void FUN_1007ced0();
extern "C" void FUN_1007cf70();
extern "C" void FUN_1007d1b0();
extern "C" void FUN_1007d290();
extern "C" void FUN_1007d9d0();
extern "C" void FUN_1007d9f0();
extern "C" void FUN_1007daf0();
extern "C" void FUN_1007ddf0();
extern "C" void FUN_1007de60();
extern "C" void FUN_1007e3b0();
extern "C" void FUN_1007e400();
extern "C" void FUN_1007e590();
extern "C" void FUN_1007e5b0();
extern "C" void FUN_1007e5c0();
extern "C" void FUN_1007e8d0();
extern "C" void FUN_1007ea30();
extern "C" void FUN_1007ea50();
extern "C" void FUN_1007ea60();
extern "C" void FUN_1007eca0();
extern "C" void FUN_1007f020();
extern "C" void FUN_1007f040();
extern "C" void FUN_1007f1d0();
extern "C" void FUN_1007f920();
extern "C" void FUN_1007f940();
extern "C" void FUN_1007fa00();
extern "C" void FUN_1007fc60();
extern "C" void FUN_100803d0();
extern "C" void FUN_10080640();
extern "C" void FUN_100807a0();
extern "C" void FUN_10080900();
extern "C" void FUN_10080cd0();
extern "C" void FUN_10080d40();
extern "C" void FUN_10080ee0();
extern "C" void FUN_10080f10();
extern "C" void FUN_10080f90();
extern "C" void FUN_10081500();
extern "C" void FUN_10081520();
extern "C" void FUN_10081a20();
extern "C" void FUN_10081d20();
extern "C" void FUN_10081d60();
extern "C" void FUN_10081fc0();
extern "C" void FUN_10081ff0();
extern "C" void FUN_100820f0();
extern "C" void FUN_10082200();
extern "C" void FUN_10082290();
extern "C" void FUN_10082330();
extern "C" void FUN_10082be0();
extern "C" void FUN_10082c00();
extern "C" void FUN_100831f0();
extern "C" void FUN_100833d0();
extern "C" void FUN_10083bf0();
extern "C" void FUN_10084330();
extern "C" void FUN_100843d0();
extern "C" void FUN_100843f0();
extern "C" void FUN_10084e00();
extern "C" void FUN_10084e20();
extern "C" void FUN_10084fe0();
extern "C" void FUN_10085590();
extern "C" void FUN_100856d0();
extern "C" void FUN_10085780();
extern "C" void FUN_10085820();
extern "C" void FUN_10085a00();
extern "C" void FUN_10085e40();
extern "C" void FUN_10085e60();
extern "C" void FUN_10085f30();
extern "C" void FUN_10086140();
extern "C" void FUN_100861c0();
extern "C" void FUN_10086240();
extern "C" void FUN_100884a0();
extern "C" void FUN_100884c0();
extern "C" void FUN_10089670();
extern "C" void FUN_100897a0();
extern "C" void FUN_10089f70();
extern "C" void FUN_1008a070();
extern "C" void FUN_1008a300();
extern "C" void FUN_1008a6a0();
extern "C" void FUN_1008a6c0();
extern "C" void FUN_1008a740();
extern "C" void FUN_1008a890();
extern "C" void FUN_1008a9a0();
extern "C" void FUN_1008aa10();
extern "C" void FUN_1008aa40();
extern "C" void FUN_1008ac60();
extern "C" void FUN_1008ac90();
extern "C" void FUN_1008acd0();
extern "C" void FUN_1008ad00();
extern "C" void FUN_1008ad20();
extern "C" void FUN_1008d070();
extern "C" void FUN_1008d090();
extern "C" void FUN_1008e380();
extern "C" void FUN_1008e500();
extern "C" void FUN_1008e730();
extern "C" void FUN_1008ea50();
extern "C" void FUN_1008ec40();
extern "C" void FUN_1008ee90();
extern "C" void FUN_1008ef10();
extern "C" void FUN_1008f040();
extern "C" void FUN_1008f1f0();
extern "C" void FUN_1008f2a0();
extern "C" void FUN_1008f2c0();
extern "C" void FUN_1008f660();
extern "C" void FUN_1008f680();
extern "C" void FUN_1008f740();
extern "C" void FUN_1008f830();
extern "C" void FUN_1008f940();
extern "C" void FUN_1008f9c0();
extern "C" void FUN_100907e0();
extern "C" void FUN_10090800();
extern "C" void FUN_10090970();
extern "C" void FUN_10090a80();
extern "C" void FUN_100917b0();
extern "C" void FUN_10091980();
extern "C" void FUN_100919f0();
extern "C" void FUN_10091b50();
extern "C" void FUN_10091c40();
extern "C" void FUN_10092440();
extern "C" void FUN_10092460();
extern "C" void FUN_10092620();
extern "C" void FUN_100926a0();
extern "C" void FUN_10092880();
extern "C" void FUN_10092fc0();
extern "C" void FUN_10093040();
extern "C" void FUN_100930c0();
extern "C" void FUN_100930e0();
extern "C" void FUN_10093ab0();
extern "C" void FUN_10093ad0();
extern "C" void FUN_10093f10();
extern "C" void FUN_10094870();
extern "C" void FUN_10094a20();
extern "C" void FUN_10094a60();
extern "C" void FUN_10094ad0();
extern "C" void FUN_10094b90();
extern "C" void FUN_10094bba();
extern "C" void FUN_10094c90();
extern "C" void FUN_10094d90();
extern "C" void FUN_10094e90();
extern "C" void FUN_10094f50();
extern "C" void FUN_10095010();
extern "C" void FUN_10095070();
extern "C" void FUN_100950d0();
extern "C" void FUN_10095370();
extern "C" void FUN_10095390();
extern "C" void FUN_10095440();
extern "C" void FUN_100955c0();
extern "C" void FUN_10095600();
extern "C" void FUN_100957d0();
extern "C" void FUN_10095a20();
extern "C" void FUN_10095af0();
extern "C" void FUN_10095b20();
extern "C" void FUN_10095b50();
extern "C" void FUN_10095b80();
extern "C" void FUN_10095bb0();
extern "C" void FUN_10095c10();
extern "C" void FUN_10095e20();
extern "C" void FUN_10096390();
extern "C" void FUN_100963b0();
extern "C" void FUN_10096490();
extern "C" void FUN_100967a0();
extern "C" void FUN_10096be0();
extern "C" void FUN_10096d20();
extern "C" void FUN_10096f20();
extern "C" void FUN_10096f40();
extern "C" void FUN_10096fe0();
extern "C" void FUN_10097170();
extern "C" void FUN_100971c0();
extern "C" void FUN_10097440();
extern "C" void FUN_100974b0();
extern "C" void FUN_10097f60();
extern "C" void FUN_10097f80();
extern "C" void FUN_10098610();
extern "C" void FUN_100987c0();
extern "C" void FUN_10098810();
extern "C" void FUN_10098a30();
extern "C" void FUN_10098b30();
extern "C" void FUN_10098b50();
extern "C" void FUN_10099570();
extern "C" void FUN_10099590();
extern "C" void FUN_10099720();
extern "C" void FUN_10099890();
extern "C" void FUN_10099a60();
extern "C" void FUN_10099d10();
extern "C" void FUN_1009a200();
extern "C" void FUN_1009b830();
extern "C" void FUN_1009c9e0();
extern "C" void FUN_1009ca00();
extern "C" void FUN_1009cbf0();
extern "C" void FUN_1009cd20();
extern "C" void FUN_1009cf10();
extern "C" void FUN_1009cfc0();
extern "C" void FUN_1009d030();
extern "C" void FUN_1009d170();
extern "C" void FUN_1009db60();
extern "C" void FUN_1009e020();
extern "C" void FUN_1009e0b0();
extern "C" void FUN_1009e6b0();
extern "C" void FUN_1009e6c0();
extern "C" void FUN_1009e7f0();
extern "C" void FUN_1009e870();
extern "C" void FUN_1009e8d0();
extern "C" void FUN_1009e990();
extern "C" void FUN_1009ea10();
extern "C" void FUN_1009eb00();
extern "C" void FUN_1009eb20();
extern "C" void FUN_1009eb90();
extern "C" void FUN_1009ebd0();
extern "C" void FUN_1009ebe0();
extern "C" void FUN_1009f550();
extern "C" void FUN_1009f570();
extern "C" void FUN_1009f750();
extern "C" void FUN_1009fc60();
extern "C" void FUN_1009fcd0();
extern "C" void FUN_1009fe00();
extern "C" void FUN_100a0160();
extern "C" void FUN_100a0190();
extern "C" void FUN_100a01b0();
extern "C" void FUN_100a0430();
extern "C" void FUN_100a0510();
extern "C" void FUN_100a0830();
extern "C" void FUN_100a0860();
extern "C" void FUN_100a0890();
extern "C" void FUN_100a08b0();
extern "C" void FUN_100a0970();
extern "C" void FUN_100a0c10();
extern "C" void FUN_100a0c30();
extern "C" void FUN_100a0cc0();
extern "C" void FUN_100a0d00();
extern "C" void FUN_100a0e80();
extern "C" void FUN_100a0f90();
extern "C" void FUN_100a0fe0();
extern "C" void FUN_100a24a0();
extern "C" void FUN_100a24c0();
extern "C" void FUN_100a2720();
extern "C" void FUN_100a2c80();
extern "C" void FUN_100a2da0();
extern "C" void FUN_100a2e40();
extern "C" void FUN_100a2f80();
extern "C" void FUN_100a3180();
extern "C" void FUN_100a3440();
extern "C" void FUN_100a3460();
extern "C" void FUN_100a34f0();
extern "C" void FUN_100a3580();
extern "C" void FUN_100a3850();
extern "C" void FUN_100a47b0();
extern "C" void FUN_100a47d0();
extern "C" void FUN_100a4a40();
extern "C" void FUN_100a4ba0();
extern "C" void FUN_100a6050();
extern "C" void FUN_100a74a0();
extern "C" void FUN_100a74f0();
extern "C" void FUN_100a7560();
extern "C" void FUN_100a75a0();
extern "C" void FUN_100a75c0();
extern "C" void FUN_100a8470();
extern "C" void FUN_100a8490();
extern "C" void FUN_100a84a0();
extern "C" void FUN_100a8710();
extern "C" void FUN_100a8770();
extern "C" void FUN_100a8f60();
extern "C" void FUN_100a9050();
extern "C" void FUN_100a9070();
extern "C" void FUN_100a9840();
extern "C" void FUN_100a9860();
extern "C" void FUN_100a9980();
extern "C" void FUN_100a9e70();
extern "C" void FUN_100a9f00();
extern "C" void FUN_100a9fd0();
extern "C" void FUN_100aa0e0();
extern "C" void FUN_100aa180();
extern "C" void FUN_100aa210();
extern "C" void FUN_100aa3c0();
extern "C" void FUN_100aa3e0();
extern "C" void FUN_100aa4a0();
extern "C" void FUN_100ac2a0();
extern "C" void FUN_100ac2c0();
extern "C" void FUN_100ac5d0();
extern "C" void FUN_100ac6a0();
extern "C" void FUN_100adfd0();
extern "C" void FUN_100ae010();
extern "C" void FUN_100ae0c0();
extern "C" void FUN_100aeb00();
extern "C" void FUN_100aeb20();
extern "C" void FUN_100aec60();
extern "C" void FUN_100aed50();
extern "C" void FUN_100af800();
extern "C" void FUN_100af820();
extern "C" void FUN_100b0600();
extern "C" void FUN_100b0620();
extern "C" void FUN_100b0830();
extern "C" void FUN_100b0870();
extern "C" void FUN_100b0a80();
extern "C" void FUN_100b0b70();
extern "C" void FUN_100b0c30();
extern "C" void FUN_100b0ca0();
extern "C" void FUN_100b0e50();
extern "C" void FUN_100b0eb0();
extern "C" void FUN_100b0ee0();
extern "C" void FUN_100b1060();
extern "C" void FUN_100b13a0();
extern "C" void FUN_100b1640();
extern "C" void FUN_100b1660();
extern "C" void FUN_100b1bc0();
extern "C" void FUN_100b1c40();
extern "C" void FUN_100b1d30();
extern "C" void FUN_100b2b20();
extern "C" void FUN_100b2b40();
extern "C" void FUN_100b2d70();
extern "C" void FUN_100b2dd0();
extern "C" void FUN_100b2e50();
extern "C" void FUN_100b3100();
extern "C" void FUN_100b3380();
extern "C" void FUN_100b35e0();
extern "C" void FUN_100b3a60();
extern "C" void FUN_100b3a80();
extern "C" void FUN_100b3b70();
extern "C" void FUN_100b3bf0();
extern "C" void FUN_100b3d20();
extern "C" void FUN_100b3db0();
extern "C" void FUN_100b4550();
extern "C" void FUN_100b4570();
extern "C" void FUN_100b5050();
extern "C" void FUN_100b5100();
extern "C" void FUN_100b52f0();
extern "C" void FUN_100b5460();
extern "C" void FUN_100b5480();
extern "C" void FUN_100b5520();
extern "C" void FUN_100b5730();
extern "C" void FUN_100b57c0();
extern "C" void FUN_100b5f70();
extern "C" void FUN_100b5f90();
extern "C" void FUN_100b60c0();
extern "C" void FUN_100b61a0();
extern "C" void FUN_100b6220();
extern "C" void FUN_100b6560();
extern "C" void FUN_100b68a0();
extern "C" void FUN_100b71f0();
extern "C" void FUN_100b7210();
extern "C" void FUN_100b7800();
extern "C" void FUN_100b79f0();
extern "C" void FUN_100b7aa0();
extern "C" void FUN_100b7ac0();
extern "C" void FUN_100b7b00();
extern "C" void FUN_100b7b70();
extern "C" void FUN_100b7ba0();
extern "C" void FUN_100b7bc0();
extern "C" void FUN_100b7cb0();
extern "C" void FUN_100b7ce0();
extern "C" void FUN_100b8380();
extern "C" void FUN_100b83b0();
extern "C" void FUN_100b8470();
extern "C" void FUN_100b8b90();
extern "C" void FUN_100b8bb0();
extern "C" void FUN_100b8cf0();
extern "C" void FUN_100b9380();
extern "C" void FUN_100ba6e0();
extern "C" void FUN_100ba700();
extern "C" void FUN_100baaa0();
extern "C" void FUN_100bab70();
extern "C" void FUN_100bbc10();
extern "C" void FUN_100bc110();
extern "C" void FUN_100bc4f0();
extern "C" void FUN_100bc630();
extern "C" void FUN_100bc780();
extern "C" void FUN_100bc7b0();
extern "C" void FUN_100bcbb0();
extern "C" void FUN_100bcc20();
extern "C" void FUN_100bcc40();
extern "C" void FUN_100bcc60();
extern "C" void FUN_100bccb0();
extern "C" void FUN_100bceb0();
extern "C" void FUN_100bd110();
extern "C" void FUN_100bd190();
extern "C" void FUN_100bd2b0();
extern "C" void FUN_100bd300();
extern "C" void FUN_100bd450();
extern "C" void FUN_100bd500();
extern "C" void FUN_100bdb00();
extern "C" void FUN_100bdb80();
extern "C" void FUN_100bdee0();
extern "C" void FUN_100bdf00();
extern "C" void FUN_100bdfc0();
extern "C" void FUN_100be040();
extern "C" void FUN_100be060();
extern "C" void FUN_100be6f0();
extern "C" void FUN_100be710();
extern "C" void FUN_100be810();
extern "C" void FUN_100be930();
extern "C" void FUN_100bea70();
extern "C" void FUN_100bec20();
extern "C" void FUN_100bec30();
extern "C" void FUN_100bec50();
extern "C" void FUN_100bec70();
extern "C" void FUN_100bec90();
extern "C" void FUN_100bef40();
extern "C" void FUN_100bef60();
extern "C" void FUN_100bf000();
extern "C" void FUN_100bf130();
extern "C" void FUN_100bf290();
extern "C" void FUN_100bf2b0();
extern "C" void FUN_100bf580();
extern "C" void FUN_100bf5f0();
extern "C" void FUN_100bf640();
extern "C" void FUN_100bf720();
extern "C" void FUN_100bfe20();
extern "C" void FUN_100bfe40();
extern "C" void FUN_100bfe50();
extern "C" void FUN_100bfec0();
extern "C" void FUN_100c0410();
extern "C" void FUN_100c0500();
extern "C" void FUN_100c0780();
extern "C" void FUN_100c0830();
extern "C" void FUN_100c08f0();
extern "C" void FUN_100c1080();
extern "C" void FUN_100c10a0();
extern "C" void FUN_100c11e0();
extern "C" void FUN_100c13c0();
extern "C" void FUN_100c17d0();
extern "C" void FUN_100c1860();
extern "C" void FUN_100c1d50();
extern "C" void FUN_100c1f20();
extern "C" void FUN_100c2220();
extern "C" void FUN_100c2530();
extern "C" void FUN_100c2780();
extern "C" void FUN_100c2950();
extern "C" void FUN_100c30e0();
extern "C" void FUN_100c32c0();
extern "C" void FUN_100c3710();
extern "C" void FUN_100c3730();
extern "C" void FUN_100c37f0();
extern "C" void FUN_100c3930();
extern "C" void FUN_100c3980();
extern "C" void FUN_100c3d10();
extern "C" void FUN_100c3d30();
extern "C" void FUN_100c3eb0();
extern "C" void FUN_100c4ce0();
extern "C" void FUN_100c4d00();
extern "C" void FUN_100c52a0();
extern "C" void FUN_100c52c0();
extern "C" void FUN_100c5380();
extern "C" void FUN_100c53b0();
extern "C" void FUN_100c5900();
extern "C" void FUN_100c5bf0();
extern "C" void FUN_100c5cc0();
extern "C" void FUN_100c5d40();
extern "C" void FUN_100c5d90();
extern "C" void FUN_100c5e00();
extern "C" void FUN_100c5e10();
extern "C" void FUN_100c5e20();
extern "C" void FUN_100c5f50();
extern "C" void FUN_100c5fb0();
extern "C" void FUN_100c6310();
extern "C" void FUN_100c6330();
extern "C" void FUN_100c6400();
extern "C" void FUN_100c6560();
extern "C" void FUN_100c6590();
extern "C" void FUN_100c6c30();
extern "C" void FUN_100c6c50();
extern "C" void FUN_100c6db0();
extern "C" void FUN_100c6ed0();
extern "C" void FUN_100c7070();
extern "C" void FUN_100c7150();
extern "C" void FUN_100c7270();
extern "C" void FUN_100c72f0();
extern "C" void FUN_100c7a60();
extern "C" void FUN_100c7a80();
extern "C" void FUN_100c8080();
extern "C" void FUN_100c8160();
extern "C" void FUN_100c8360();
extern "C" void FUN_100c8400();
extern "C" void FUN_100c84a0();
extern "C" void FUN_100c8560();
extern "C" void FUN_100c8ac0();
extern "C" void FUN_100c8ae0();
extern "C" void FUN_100c8c30();
extern "C" void FUN_100c8e60();
extern "C" void FUN_100c9350();
extern "C" void FUN_100c9460();
extern "C" void FUN_100c9560();
extern "C" void FUN_100c9a90();
extern "C" void FUN_100c9ab0();
extern "C" void FUN_100c9b70();
extern "C" void FUN_100c9bc0();
extern "C" void FUN_100c9e40();
extern "C" void FUN_100c9fd0();
extern "C" void FUN_100cc550();
extern "C" void FUN_100cc570();
extern "C" void FUN_100cd0b0();
extern "C" void FUN_100ce6d0();
extern "C" void FUN_100cebf0();
extern "C" void FUN_100cee50();
extern "C" void FUN_100cef70();
extern "C" void FUN_100cf110();
extern "C" void FUN_100cf140();
extern "C" void FUN_100cf280();
extern "C" void FUN_100cf580();
extern "C" void FUN_100cf5a0();
extern "C" void FUN_100cf620();
extern "C" void FUN_100cf780();
extern "C" void FUN_100cf810();
extern "C" void FUN_100cf870();
extern "C" void FUN_100cfa50();
extern "C" void FUN_100cfb20();
extern "C" void FUN_100cff20();
extern "C" void FUN_100cff40();
extern "C" void FUN_100d0060();
extern "C" void FUN_100d0110();
extern "C" void FUN_100d0220();
extern "C" void FUN_100d02d0();
extern "C" void FUN_100d0470();
extern "C" void FUN_100d0490();
extern "C" void FUN_100d05b0();
extern "C" void FUN_100d05f0();
extern "C" void FUN_100d0630();
extern "C" void FUN_100d1710();
extern "C" void FUN_100d1730();
extern "C" void FUN_100d1900();
extern "C" void FUN_100d19e0();
extern "C" void FUN_100d25c0();
extern "C" void FUN_100d2e60();
extern "C" void FUN_100d3660();
extern "C" void FUN_100d3690();
extern "C" void FUN_100d37e0();
extern "C" void FUN_100d3eb0();
extern "C" void FUN_100d3ed0();
extern "C" void FUN_100d3f50();
extern "C" void FUN_100d43d0();
extern "C" void FUN_100d4960();
extern "C" void FUN_100d4980();
extern "C" void FUN_100d4a80();
extern "C" void FUN_100d4d20();
extern "C" void FUN_100d4df0();
extern "C" void FUN_100d4e60();
extern "C" void FUN_100d53d0();
extern "C" void FUN_100d53f0();
extern "C" void FUN_100d5690();
extern "C" void FUN_100d5a90();
extern "C" void FUN_100d5e40();
extern "C" void FUN_100d5fb0();
extern "C" void FUN_100d6160();
extern "C" void FUN_100d6810();
extern "C" void FUN_100d6830();
extern "C" void FUN_100d68c0();
extern "C" void FUN_100d6a80();
extern "C" void FUN_100d6a90();
extern "C" void FUN_100d6aa0();
extern "C" void FUN_100d8830();
extern "C" void FUN_100d8850();
extern "C" void FUN_100d8c90();
extern "C" void FUN_100d8ff0();
extern "C" void FUN_100d9110();
extern "C" void FUN_100d9180();
extern "C" void FUN_100d91b0();
extern "C" void FUN_100d9200();
extern "C" void FUN_100d94f0();
extern "C" void FUN_100d9630();
extern "C" void FUN_100d9b60();
extern "C" void FUN_100d9d50();
extern "C" void FUN_100da2f0();
extern "C" void FUN_100da440();
extern "C" void FUN_100db140();
extern "C" void FUN_100db390();
extern "C" void FUN_100db620();
extern "C" void FUN_100db6e0();
extern "C" void FUN_100db7a0();
extern "C" void FUN_100db890();
extern "C" void FUN_100db980();
extern "C" void FUN_100dbae0();
extern "C" void FUN_100dbc40();
extern "C" void FUN_100dbd90();
extern "C" void FUN_100dbee0();
extern "C" void FUN_100dc5a0();
extern "C" void FUN_100dc5c0();
extern "C" void FUN_100dc6b0();
extern "C" void FUN_100dcae0();
extern "C" void FUN_100dcb80();
extern "C" void FUN_100dcbf0();
extern "C" void FUN_100dcdf0();
extern "C" void FUN_100dd2c0();
extern "C" void FUN_100dd2e0();
extern "C" void FUN_100dd3d0();
extern "C" void FUN_100dd430();
extern "C" void FUN_100dd4a0();
extern "C" void FUN_100dd510();
extern "C" void FUN_100dd570();
extern "C" void FUN_100dd600();
extern "C" void FUN_100dd8b0();
extern "C" void FUN_100dd9d0();
extern "C" void FUN_100ddaa0();
extern "C" void FUN_100ddb90();
extern "C" void FUN_100ddf20();
extern "C" void FUN_100de630();
extern "C" void FUN_100de650();
extern "C" void FUN_100de9c0();
extern "C" void FUN_100deab0();
extern "C" void FUN_100deb10();
extern "C" void FUN_100deb70();
extern "C" void FUN_100debf0();
extern "C" void FUN_100dec50();
extern "C" void FUN_100decd0();
extern "C" void FUN_100dee80();
extern "C" void FUN_100deea0();
extern "C" void FUN_100deff0();
extern "C" void FUN_100df760();
extern "C" void FUN_100e0c60();
extern "C" void FUN_100e0c80();
extern "C" void FUN_100e1020();
extern "C" void FUN_100e16b0();
extern "C" void FUN_100e18d0();
extern "C" void FUN_100e19a0();
extern "C" void FUN_100e1b90();
extern "C" void FUN_100e1cd0();
extern "C" void FUN_100e2100();
extern "C" void FUN_100e2120();
extern "C" void FUN_100e22b0();
extern "C" void FUN_100e2320();
extern "C" void FUN_100e2350();
extern "C" void FUN_100e2400();
extern "C" void FUN_100e2440();
extern "C" void FUN_100e2460();
extern "C" void FUN_100e2470();
extern "C" void FUN_100e2600();
extern "C" void FUN_100e2800();
extern "C" void FUN_100e2890();
extern "C" void FUN_100e28e0();
extern "C" void FUN_100e2940();
extern "C" void FUN_100e2eb0();
extern "C" void FUN_100e2ed0();
extern "C" void FUN_100e3000();
extern "C" void FUN_100e3040();
extern "C" void FUN_100e3140();
extern "C" void FUN_100e3290();
extern "C" void FUN_100e3460();
extern "C" void FUN_100e35a0();
extern "C" void FUN_100e35c0();
extern "C" void FUN_100e3ec0();
extern "C" void FUN_100e3ee0();
extern "C" void FUN_100e4020();
extern "C" void FUN_100e4090();
extern "C" void FUN_100e4580();
extern "C" void FUN_100e4700();
extern "C" void FUN_100e4b20();
extern "C" void FUN_100e4b40();
extern "C" void FUN_100e4c00();
extern "C" void FUN_100e6c00();
extern "C" void FUN_100e6f40();
extern "C" void FUN_100e7390();
extern "C" void FUN_100e77d0();
extern "C" void FUN_100e7870();
extern "C" void FUN_100e78a0();
extern "C" void FUN_100e97a0();
extern "C" void FUN_100e97c0();
extern "C" void FUN_100e9b90();
extern "C" void FUN_100e9d70();
extern "C" void FUN_100ea370();
extern "C" void FUN_100eb1c0();
extern "C" void FUN_100eb350();
extern "C" void FUN_100eb410();
extern "C" void FUN_100eb470();
extern "C" void FUN_100eb550();
extern "C" void FUN_100eb920();
extern "C" void FUN_100ec3b0();
extern "C" void FUN_100ec530();
extern "C" void FUN_100ecc60();
extern "C" void FUN_100ed180();
extern "C" void FUN_100ed1d0();
extern "C" void FUN_100ed390();
extern "C" void FUN_100ed4f0();
extern "C" void FUN_100eda40();
extern "C" void FUN_100edbb0();
extern "C" void FUN_100edc70();
extern "C" void FUN_100edd00();
extern "C" void FUN_100edeb0();
extern "C" void FUN_100edfe0();
extern "C" void FUN_100edff0();
extern "C" void FUN_100ee110();
extern "C" void FUN_100ee1a0();
extern "C" void FUN_100ee300();
extern "C" void FUN_100ee370();
extern "C" void FUN_100ee5c0();
extern "C" void FUN_100ee5d0();
extern "C" void FUN_100ee5e0();
extern "C" void FUN_100ee790();
extern "C" void FUN_100ee8e0();
extern "C" void FUN_100ee9e0();
extern "C" void FUN_100eea50();
extern "C" void FUN_100eeae0();
extern "C" void FUN_100eeea0();
extern "C" void FUN_100ef170();
extern "C" void FUN_100ef2f0();
extern "C" void FUN_100ef340();
extern "C" void FUN_100ef370();
extern "C" void FUN_100ef4d0();
extern "C" void FUN_100ef560();
extern "C" void FUN_100ef780();
extern "C" void FUN_100ef7c0();
extern "C" void FUN_100f0370();
extern "C" void FUN_100f0890();
extern "C" void FUN_100f08b0();
extern "C" void FUN_100f0930();
extern "C" void FUN_100f0a20();
extern "C" void FUN_100f0c90();
extern "C" void FUN_100f0da0();
extern "C" void FUN_100f0e00();
extern "C" void FUN_100f1000();
extern "C" void FUN_100f1090();
extern "C" void FUN_100f1120();
extern "C" void FUN_100f1220();
extern "C" void FUN_100f1290();
extern "C" void FUN_100f1310();
extern "C" void FUN_100f1360();
extern "C" void FUN_100f13a0();
extern "C" void FUN_100f13f0();
extern "C" void FUN_100f1520();
extern "C" void FUN_100f1830();
extern "C" void FUN_100f19e0();
extern "C" void FUN_100f1a10();
extern "C" void FUN_100f1ab0();
extern "C" void FUN_100f1b30();
extern "C" void FUN_100f1b60();
extern "C" void FUN_100f1b90();
extern "C" void FUN_100f1bb0();
extern "C" void FUN_100f1dd0();
extern "C" void FUN_100f1de0();
extern "C" void FUN_100f1e40();
extern "C" void FUN_100f1ea0();
extern "C" void FUN_100f2470();
extern "C" void FUN_100f2a00();
extern "C" void FUN_100f33a0();
extern "C" void FUN_100f3450();
extern "C" void FUN_100f3620();
extern "C" void FUN_100f3640();
extern "C" void FUN_100f3710();
extern "C" void FUN_100f37b0();
extern "C" void FUN_100f3850();
extern "C" void FUN_100f39b0();
extern "C" void FUN_100f3b10();
extern "C" void FUN_100f3d10();
extern "C" void FUN_100f3f10();
extern "C" void FUN_100f3f40();
extern "C" void FUN_100f4000();
extern "C" void FUN_100f4030();
extern "C" void FUN_100f4060();
extern "C" void FUN_100f40b0();
extern "C" void FUN_100f40d0();
extern "C" void FUN_100f40e0();
extern "C" void FUN_100f4240();
extern "C" void FUN_100f4250();
extern "C" void FUN_100f42d0();
extern "C" void FUN_100f42f0();
extern "C" void FUN_100f4300();
extern "C" void FUN_100f43b0();
extern "C" void FUN_100f5720();
extern "C" void FUN_100f5740();
extern "C" void FUN_100f5c90();
extern "C" void FUN_100f5e70();
extern "C" void FUN_100f6f10();
extern "C" void FUN_100f7e80();
extern "C" void FUN_100f7ea0();
extern "C" void FUN_100f83a0();
extern "C" void FUN_100f8490();
extern "C" void FUN_100f86e0();
extern "C" void FUN_100f8950();
extern "C" void FUN_100f8df0();
extern "C" void FUN_100f9200();
extern "C" void FUN_100f94e0();
extern "C" void FUN_100f9720();
extern "C" void FUN_100f99f0();
extern "C" void FUN_100f9ba0();
extern "C" void FUN_100f9d80();
extern "C" void FUN_100f9fa0();
extern "C" void FUN_100fa1f0();
extern "C" void FUN_100fa210();
extern "C" void FUN_100fa250();
extern "C" void FUN_100fa780();
extern "C" void FUN_100fa7a0();
extern "C" void FUN_100fa820();
extern "C" void FUN_100fab50();
extern "C" void FUN_100fabc0();
extern "C" void FUN_100fabe0();
extern "C" void FUN_100fac00();
extern "C" void FUN_100fac50();
extern "C" void FUN_100facd0();
extern "C" void FUN_100fad00();
extern "C" void FUN_100fad30();
extern "C" void FUN_100faef0();
extern "C" void FUN_100faf20();
extern "C" void FUN_100fb040();
extern "C" void FUN_100fb0e0();
extern "C" void FUN_100fb130();
extern "C" void FUN_100fb1e0();
extern "C" void FUN_100fb270();
extern "C" void FUN_100fb2e0();
extern "C" void FUN_100fb340();
extern "C" void FUN_100fb360();
extern "C" void FUN_100fb430();
extern "C" void FUN_100fb450();
extern "C" void FUN_100fb460();
extern "C" void FUN_100fb500();
extern "C" void FUN_100fb8a0();
extern "C" void FUN_100fb8c0();
extern "C" void FUN_100fb940();
extern "C" void FUN_100fc720();
extern "C" void FUN_100fca90();
extern "C" void FUN_100fcbd0();
extern "C" void FUN_100fcbf0();
extern "C" void FUN_100fcca0();
extern "C" void FUN_100fd930();
extern "C" void FUN_100fd950();
extern "C" void FUN_100fd960();
extern "C" void FUN_100fda10();
extern "C" void FUN_100fda40();
extern "C" void FUN_100fda60();
extern "C" void FUN_100fe770();
extern "C" void FUN_100fe8a0();
extern "C" void FUN_100fe8b0();
extern "C" void FUN_100fe970();
extern "C" void FUN_100fea50();
extern "C" void FUN_100feb90();
extern "C" void FUN_100fecd0();
extern "C" void FUN_100fed50();
extern "C" void FUN_100fedc0();
extern "C" void FUN_100fee30();
extern "C" void FUN_100fee80();
extern "C" void FUN_100feec0();
extern "C" void FUN_100ff060();
extern "C" void FUN_100ff0b0();
extern "C" void FUN_100ff120();
extern "C" void FUN_100ff160();
extern "C" void FUN_100ff1a0();
extern "C" void FUN_100ff290();
extern "C" void FUN_100ff330();
extern "C" void FUN_100ff350();
extern "C" void FUN_100ff3d0();
extern "C" void FUN_100ff4d0();
extern "C" void FUN_100ff530();
extern "C" void FUN_100ff720();
extern "C" void FUN_100ff740();
extern "C" void FUN_100ff790();
extern "C" void FUN_100ff7e0();
extern "C" void FUN_100ff890();
extern "C" void FUN_100ff900();
extern "C" void FUN_100ff920();
extern "C" void FUN_100ff930();
extern "C" void FUN_100ff9b0();
extern "C" void FUN_100ff9f0();
extern "C" void FUN_100ffa10();
extern "C" void FUN_100ffac0();
extern "C" void FUN_100ffb60();
extern "C" void FUN_100ffb80();
extern "C" void FUN_100ffc40();
extern "C" void FUN_10102780();
extern "C" void FUN_101027d0();
extern "C" void FUN_101029b0();
extern "C" void FUN_101029d0();
extern "C" void FUN_101029f0();
extern "C" void FUN_10102c10();
extern "C" void FUN_10102c40();
extern "C" void FUN_10102e80();
extern "C" void FUN_10102ea0();
extern "C" void FUN_10102eb0();
extern "C" void FUN_10103060();
extern "C" void FUN_10103100();
extern "C" void FUN_10103120();
extern "C" void FUN_10103130();
extern "C" void FUN_101033d0();
extern "C" void FUN_10103450();
extern "C" void FUN_101034e0();
extern "C" void FUN_10103560();
extern "C" void FUN_10103590();
extern "C" void FUN_101035b0();
extern "C" void FUN_10103620();
extern "C" void FUN_101036b0();
extern "C" void FUN_10103860();
extern "C" void FUN_10103970();
extern "C" void FUN_10103a50();
extern "C" void FUN_10103b50();
extern "C" void FUN_10103b80();
extern "C" void FUN_10103c10();
extern "C" void FUN_10103c30();
extern "C" void FUN_10103cb0();
extern "C" void FUN_10103db0();
extern "C" void FUN_10103de0();
extern "C" void FUN_10103e10();
extern "C" void FUN_10103e40();
extern "C" void FUN_10103e60();
extern "C" void FUN_10103e90();
extern "C" void FUN_10103eb0();
extern "C" void FUN_10103f80();
extern "C" void FUN_10104030();
extern "C" void FUN_10104090();
extern "C" void FUN_101040c0();
extern "C" void FUN_101040f0();
extern "C" void FUN_10104380();
extern "C" void FUN_10104530();
extern "C" void FUN_10104580();
extern "C" void FUN_101045b0();
extern "C" void FUN_10104620();
extern "C" void FUN_10104680();
extern "C" void FUN_10104710();
extern "C" void FUN_10104750();
extern "C" void FUN_10104790();
extern "C" void FUN_101047f0();
extern "C" void FUN_10104840();
extern "C" void FUN_10104860();
extern "C" void FUN_10104a80();
extern "C" void FUN_10104b00();
extern "C" void FUN_10104b20();
extern "C" void FUN_10104c90();
extern "C" void FUN_10104dd0();
extern "C" void FUN_10104ea0();
extern "C" void FUN_10104f50();
extern "C" void FUN_101050a0();
extern "C" void FUN_101050c0();
extern "C" void FUN_10105bd0();
extern "C" void FUN_10105c00();
extern "C" void FUN_10105c40();
extern "C" void FUN_10105ce0();
extern "C" void FUN_10105de0();
extern "C" void FUN_10105e00();
extern "C" void FUN_101061e0();
extern "C" void FUN_10106240();
extern "C" void FUN_10106440();
extern "C" void FUN_10106460();
extern "C" void FUN_10106480();
extern "C" void FUN_10106670();
extern "C" void FUN_10106690();
extern "C" void FUN_101066c0();
extern "C" void FUN_10106720();
extern "C" void FUN_10106740();
extern "C" void FUN_10106f80();
extern "C" void FUN_101070a0();
extern "C" void FUN_101071f0();
extern "C" void FUN_10107330();
extern "C" void FUN_10107470();
extern "C" void FUN_10107550();
extern "C" void FUN_10107570();
extern "C" void FUN_10107590();
extern "C" void FUN_101076d0();
extern "C" void FUN_101076f0();
extern "C" void FUN_101080d0();
extern "C" void FUN_101080f0();
extern "C" void FUN_10108140();
extern "C" void FUN_10108650();
extern "C" void FUN_10108690();
extern "C" void FUN_101086b0();
extern "C" void FUN_10108740();
extern "C" void FUN_10108f10();
extern "C" void FUN_10108f40();
extern "C" void FUN_10108f90();
extern "C" void FUN_10108fb0();
extern "C" void FUN_10109040();
extern "C" void FUN_10109090();
extern "C" void FUN_101090d0();
extern "C" void FUN_101090f0();
extern "C" void FUN_10109170();
extern "C" void FUN_10109190();
extern "C" void FUN_101091a0();
extern "C" void FUN_10109200();
extern "C" void FUN_10109260();
extern "C" void FUN_10109280();
extern "C" void FUN_10109290();
extern "C" void FUN_10109320();
extern "C" void FUN_101093c0();
extern "C" void FUN_101094f0();
extern "C" void FUN_101097a0();
extern "C" void FUN_10109810();
extern "C" void FUN_10109830();
extern "C" void FUN_10109840();
extern "C" void FUN_101098e0();
extern "C" void FUN_10109930();
extern "C" void FUN_10109950();
extern "C" void FUN_10109ad0();
extern "C" void FUN_10109b20();
extern "C" void FUN_10109b40();
extern "C" void FUN_10109ca0();
extern "C" void FUN_10109cc0();
extern "C" void FUN_10109ce0();
extern "C" void FUN_10109cf0();
extern "C" void FUN_1010b0b0();
extern "C" void FUN_1010c290();
extern "C" void FUN_1010c2b0();
extern "C" void FUN_1010c2d0();
extern "C" void FUN_1010c2e0();
extern "C" void FUN_1010f390();
extern "C" void FUN_101121a0();
extern "C" void FUN_101121c0();
extern "C" void FUN_101121e0();
extern "C" void FUN_101121f0();
extern "C" void FUN_101153f0();
extern "C" void FUN_101182f0();
extern "C" void FUN_10118310();
extern "C" void FUN_10118330();
extern "C" void FUN_10118360();
extern "C" void FUN_10119e00();
extern "C" void FUN_1011b0e0();
extern "C" void FUN_1011b100();
extern "C" void FUN_1011b120();
extern "C" void FUN_1011b150();
extern "C" void FUN_1011f370();
extern "C" void FUN_101221b0();
extern "C" void FUN_101221d0();
extern "C" void FUN_101221f0();
extern "C" void FUN_10122220();
extern "C" void FUN_10126570();
extern "C" void FUN_10129480();
extern "C" void FUN_101294a0();
extern "C" void FUN_101294c0();
extern "C" void FUN_101294f0();
extern "C" void FUN_1012d2b0();
extern "C" void FUN_1012f0c0();
extern "C" void FUN_1012f0e0();
extern "C" void FUN_1012f100();
extern "C" void FUN_1012f130();
extern "C" void FUN_10137e90();
extern "C" void FUN_1013b830();
extern "C" void FUN_1013b850();
extern "C" void FUN_1013b870();
extern "C" void FUN_1013b8a0();
extern "C" void FUN_10144810();
extern "C" void FUN_10148170();
extern "C" void FUN_10148190();
extern "C" void FUN_101481b0();
extern "C" void FUN_101481e0();
extern "C" void FUN_1014c060();
extern "C" void FUN_1014dec0();
extern "C" void FUN_1014dee0();
extern "C" void FUN_1014df00();
extern "C" void FUN_1014df30();
extern "C" void FUN_10156e30();
extern "C" void FUN_1015a830();
extern "C" void FUN_1015a850();
extern "C" void FUN_1015a870();
extern "C" void FUN_1015a8a0();
extern "C" void FUN_101639b0();
extern "C" void FUN_10167370();
extern "C" void FUN_10167390();
extern "C" void FUN_101673b0();
extern "C" void FUN_101673e0();
extern "C" void FUN_10167430();
extern "C" void FUN_10167450();
extern "C" void FUN_10167700();
extern "C" void FUN_10167770();
extern "C" void FUN_10167820();
extern "C" void FUN_10167bf0();
extern "C" void FUN_10167d20();
extern "C" void FUN_10167db0();
extern "C" void FUN_10167dd0();
extern "C" void FUN_10167eb0();
extern "C" void FUN_10167ec0();
extern "C" void FUN_10168190();
extern "C" void FUN_101690e0();
extern "C" void FUN_101693c0();
extern "C" void FUN_1016a210();
extern "C" void FUN_1016a4e0();
extern "C" void FUN_1016ad30();
extern "C" void FUN_1016ae90();
extern "C" void FUN_1016b1a0();
extern "C" void FUN_1016bc00();
extern "C" void FUN_1016bc10();
extern "C" void FUN_1016bd70();
extern "C" void FUN_1016beb0();
extern "C" void FUN_1016bf50();
extern "C" void FUN_1016c170();
extern "C" void FUN_1016c1d0();
extern "C" void FUN_1016c2d0();
extern "C" void FUN_1016c4b0();
extern "C" void FUN_1016c500();
extern "C" void FUN_1016c550();
extern "C" void FUN_1016c570();
extern "C" void FUN_1016c6e0();
extern "C" void FUN_1016c784();
extern "C" void FUN_1016c7a6();
extern "C" void FUN_1016c7ac();
extern "C" void FUN_1016c7b2();
extern "C" void FUN_1016c7c0();
extern "C" void FUN_1016c7f0();
extern "C" void FUN_1016c830();
extern "C" void FUN_1016c940();
extern "C" void FUN_1016c9b5();
extern "C" void FUN_1016c9d1();
extern "C" void FUN_1016c9f0();
extern "C" void FUN_1016ca70();
extern "C" void FUN_1016caa0();
extern "C" void FUN_1016cb11();
extern "C" void FUN_1016cb2d();
extern "C" void FUN_1016cb40();
extern "C" void FUN_1016cd44();
extern "C" void FUN_1016cd4a();
extern "C" void FUN_1016cd50();
extern "C" void FUN_1016cd56();
extern "C" void FUN_1016cd62();
extern "C" void FUN_1016cd68();
extern "C" void FUN_1016cd6e();
extern "C" void FUN_1016cd74();
extern "C" void FUN_101e2b70();
extern "C" void InitializeCommon();
extern "C" void InitializeRowControl();
extern "C" void InitializeScreenBase();

extern "C" __declspec(naked) void LoadSpriteAssetResource() {
    __asm {
        push -1
        push 10174906h
        ; Exact immediate encoding: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact immediate encoding: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 288h
        ; Exact immediate encoding: mov eax, dword ptr [101acdb4h]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        test eax, eax
        mov dword ptr [esp + 10h], edi
        ; Exact immediate encoding: je near ptr L_101026B3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ach]
        mov esi, dword ptr [esp + 2a8h]
        test eax, eax
        ; Exact immediate encoding: jne near ptr L_10101A72
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov ebx, 1e8480h
        __asm _emit 0xbb
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x00
        push ebx
        mov dword ptr [esp + 30h], ebx
        mov dword ptr [esp + 24h], ebx
        call FUN_1016cd4a
        push ebx
        mov ebp, eax
        call FUN_1016cd4a
        add esp, 8
        mov ebx, eax
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 80000000h
        push esi
        ; Exact immediate encoding: call dword ptr [101750c4h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, -1
        mov dword ptr [edi + 4], eax
        ; Exact immediate encoding: je near ptr L_101026B3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov esi, dword ptr [101750b8h]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esp + 14h]
        push 0
        lea ecx, [edi + 108h]
        push edx
        push 84h
        push ecx
        push eax
        mov dword ptr [esp + 38h], ecx
        call esi
        cmp eax, 1
        ; Exact immediate encoding: jne near ptr L_10101542
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 24h]
        xor eax, eax
L_100FFCFC:
        mov dl, byte ptr [ecx + eax]
        cmp dl, byte ptr [eax + 1017f3ech]
        ; Exact immediate encoding: jne short L_100FFD3A
        __asm _emit 0x75
        __asm _emit 0x33
        inc eax
        cmp eax, 28h
        ; Exact immediate encoding: jl short L_100FFCFC
        __asm _emit 0x7c
        __asm _emit 0xef
        mov al, byte ptr [edi + 15ch]
        cmp al, 3
        ; Exact immediate encoding: jle short L_100FFD5D
        __asm _emit 0x7e
        __asm _emit 0x46
        mov edx, dword ptr [esp + 2a8h]
        lea eax, [esp + 198h]
        push edx
        push 101acd9ch
        push eax
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact immediate encoding: jmp near ptr L_101026A5
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
L_100FFD3A:
        mov eax, dword ptr [esp + 2a8h]
        lea ecx, [esp + 198h]
        push eax
        push 101acd78h
        push ecx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact immediate encoding: jmp near ptr L_101026A5
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
L_100FFD5D:
        cmp al, 1
        ; Exact immediate encoding: je short L_100FFD9C
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp al, 2
        ; Exact immediate encoding: je short L_100FFD9C
        __asm _emit 0x74
        __asm _emit 0x37
        cmp al, 3
        ; Exact immediate encoding: jne near ptr L_100FFE8A
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        lea ecx, [esp + 14h]
        push 0
        push ecx
        lea edx, [esp + 38h]
        push 4
        push edx
        push eax
        call esi
        cmp eax, 1
        ; Exact immediate encoding: je near ptr L_100FFE8A
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 2a8h]
        push ecx
        push 101acd48h
        ; Exact immediate encoding: jmp near ptr L_101015C8
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
L_100FFD9C:
        mov eax, dword ptr [edi + 4]
        push 0
        push 0
        push 0
        push eax
        ; Exact immediate encoding: call dword ptr [1017508ch]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [edi + 4]
        lea ecx, [esp + 14h]
        push 0
        push ecx
        lea edx, [esp + 3ch]
        push 84h
        push edx
        push eax
        call esi
        mov eax, dword ptr [edi + 4]
        lea ecx, [esp + 14h]
        push 0
        push ecx
        lea edx, [esp + 38h]
        push 4
        push edx
        push eax
        call esi
        cmp eax, 1
        ; Exact immediate encoding: jne near ptr L_10101A4F
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 10h]
        ; Exact immediate encoding: mov ecx, 0ah
        __asm _emit 0xb9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [esp + 34h]
        ; Exact immediate encoding: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [esp + 5ch]
        mov dl, byte ptr [esp + 88h]
        mov dword ptr [eax + 130h], ecx
        lea edi, [eax + 134h]
        ; Exact immediate encoding: mov ecx, 0ah
        __asm _emit 0xb9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [esp + 60h]
        ; Exact immediate encoding: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov cl, byte ptr [esp + 89h]
        mov byte ptr [eax + 15ch], dl
        mov dl, byte ptr [esp + 8ah]
        mov byte ptr [eax + 15dh], cl
        mov ecx, dword ptr [esp + 8ch]
        mov byte ptr [eax + 15eh], dl
        mov edx, dword ptr [esp + 90h]
        mov dword ptr [eax + 160h], ecx
        mov ecx, dword ptr [esp + 94h]
        mov dword ptr [eax + 164h], edx
        mov dword ptr [eax + 168h], ecx
        xor ecx, ecx
        mov dword ptr [eax + 16ch], ecx
        mov dword ptr [eax + 170h], ecx
        xor edx, edx
        add eax, 174h
        mov edi, dword ptr [esp + 10h]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], edx
        mov dword ptr [eax + 8], edx
        mov dword ptr [eax + 0ch], edx
        mov dword ptr [eax + 10h], edx
        mov word ptr [eax + 14h], dx
        mov byte ptr [eax + 16h], dl
L_100FFE8A:
        mov al, byte ptr [edi + 15ch]
        cmp al, 2
        ; Exact immediate encoding: je short L_100FFE9C
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, 3
        ; Exact immediate encoding: jne near ptr L_101001AA
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_100FFE9C:
        mov eax, dword ptr [edi + 170h]
        shl eax, 2
        push eax
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [edi + 194h], eax
        test eax, eax
        ; Exact immediate encoding: jne short L_100FFECA
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [esp + 2a8h]
        push ecx
        push 101acd20h
        ; Exact immediate encoding: jmp near ptr L_101015C8
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
L_100FFECA:
        mov eax, dword ptr [edi + 170h]
        xor esi, esi
        test eax, eax
        ; Exact immediate encoding: jle near ptr L_101001AA
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_100FFEDA:
        mov edx, dword ptr [edi + 4]
        lea eax, [esp + 14h]
        push 0
        push eax
        lea ecx, [esp + 0c0h]
        push 64h
        push ecx
        push edx
        ; Exact immediate encoding: call dword ptr [101750b8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact immediate encoding: je near ptr L_101001D8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 4]
        lea eax, [esp + 14h]
        push 0
        push eax
        lea ecx, [esp + 38h]
        push 4
        push ecx
        push edx
        ; Exact immediate encoding: call dword ptr [101750b8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 0bch]
        test eax, eax
        ; Exact immediate encoding: jne near ptr L_10100152
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 104h], 100000h
        ; Exact immediate encoding: jae near ptr L_10100095
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 0
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je short L_100FFF5F
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0
        push 0
        mov ecx, eax
        call FUN_10103560
        ; Exact immediate encoding: jmp short L_100FFF61
        __asm _emit 0xeb
        __asm _emit 0x02
L_100FFF5F:
        xor eax, eax
L_100FFF61:
        mov ecx, dword ptr [edi + 194h]
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        mov dword ptr [ecx + esi*4], eax
        ; Exact immediate encoding: je near ptr L_1010019B
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 104h]
        mov ecx, dword ptr [edi + 194h]
        push 2
        lea eax, [esp + 0ech]
        mov ecx, dword ptr [ecx + esi*4]
        push edx
        push eax
        call FUN_101036b0
        mov edx, dword ptr [edi + 194h]
        mov ecx, dword ptr [edx + esi*4]
        lea eax, [edx + esi*4]
        mov edx, dword ptr [ecx + 18h]
        test edx, edx
        ; Exact immediate encoding: je near ptr L_1010007A
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, ecx
        ; Exact immediate encoding: mov dword ptr [esp + 1ch], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov eax, dword ptr [edx + 18h]
        lea edx, [esp + 2ch]
        push 0
        push edx
        mov ecx, dword ptr [eax]
        lea edx, [esp + 2ch]
        push edx
        mov edx, dword ptr [esp + 118h]
        push edx
        push 0
        push eax
        call dword ptr [ecx + 2ch]
        test eax, eax
        ; Exact immediate encoding: jl short L_1010005F
        __asm _emit 0x7c
        __asm _emit 0x7a
        mov eax, dword ptr [edi + 194h]
        mov edx, dword ptr [esp + 1ch]
        push 0
        mov ecx, dword ptr [eax + esi*4]
        lea eax, [esp + 28h]
        push eax
        mov dword ptr [ecx + 10h], edx
        mov ecx, dword ptr [esp + 10ch]
        mov edx, dword ptr [esp + 24h]
        mov eax, dword ptr [edi + 4]
        push ecx
        push edx
        push eax
        ; Exact immediate encoding: call dword ptr [101750b8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, 1
        ; Exact immediate encoding: jne short L_10100037
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [edi + 194h]
        push 0
        mov ecx, dword ptr [ecx + esi*4]
        mov dword ptr [esp + 1ch], ecx
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0ch]
        mov ecx, dword ptr [esp + 18h]
        push 0
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 10h]
L_10100037:
        mov ecx, dword ptr [edi + 194h]
        push 0
        push 0
        mov edx, dword ptr [ecx + esi*4]
        mov eax, dword ptr [edx + 18h]
        mov edx, dword ptr [esp + 10ch]
        push edx
        mov edx, dword ptr [esp + 28h]
        mov ecx, dword ptr [eax]
        push edx
        push eax
        call dword ptr [ecx + 4ch]
        ; Exact immediate encoding: jmp near ptr L_1010019B
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1010005F:
        mov eax, dword ptr [esp + 104h]
        mov ecx, dword ptr [edi + 4]
        push 1
        push 0
        push eax
        push ecx
        ; Exact immediate encoding: call dword ptr [1017508ch]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: jmp near ptr L_1010019B
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_1010007A:
        mov edx, dword ptr [esp + 104h]
        mov eax, dword ptr [edi + 4]
        push 1
        push 0
        push edx
        push eax
        ; Exact immediate encoding: call dword ptr [1017508ch]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: jmp near ptr L_1010019B
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10100095:
        push 58h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 1
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je short L_101000BB
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        call FUN_101673e0
        ; Exact immediate encoding: jmp short L_101000BD
        __asm _emit 0xeb
        __asm _emit 0x02
L_101000BB:
        xor eax, eax
L_101000BD:
        mov ecx, dword ptr [edi + 194h]
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        mov dword ptr [ecx + esi*4], eax
        ; Exact immediate encoding: je short L_1010013A
        __asm _emit 0x74
        __asm _emit 0x65
        mov edx, dword ptr [edi + 194h]
        mov eax, dword ptr [edi + 4]
        push 1
        push 0
        mov ecx, dword ptr [edx + esi*4]
        push 0
        mov dword ptr [ecx + 3ch], eax
        mov edx, dword ptr [edi + 4]
        push edx
        ; Exact immediate encoding: call dword ptr [1017508ch]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 194h]
        push 0c0h
        push 8000h
        push 0ah
        mov edx, dword ptr [ecx + esi*4]
        mov dword ptr [edx + 30h], eax
        mov eax, dword ptr [edi + 194h]
        mov edx, dword ptr [esp + 110h]
        mov eax, dword ptr [eax + esi*4]
        mov ecx, dword ptr [eax + 30h]
        add ecx, edx
        lea edx, [esp + 0f4h]
        mov dword ptr [eax + 34h], ecx
        mov eax, dword ptr [edi + 194h]
        push edx
        mov ecx, dword ptr [eax + esi*4]
        call FUN_10167820
L_1010013A:
        mov ecx, dword ptr [esp + 104h]
        mov edx, dword ptr [edi + 4]
        push 1
        push 0
        push ecx
        push edx
        ; Exact immediate encoding: call dword ptr [1017508ch]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: jmp short L_1010019B
        __asm _emit 0xeb
        __asm _emit 0x49
L_10100152:
        cmp eax, 1
        ; Exact immediate encoding: jne short L_1010019B
        __asm _emit 0x75
        __asm _emit 0x44
        push 10h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 2
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je short L_10100181
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0
        push 0
        mov ecx, eax
        call FUN_10167370
        ; Exact immediate encoding: jmp short L_10100183
        __asm _emit 0xeb
        __asm _emit 0x02
L_10100181:
        xor eax, eax
L_10100183:
        mov ecx, dword ptr [edi + 194h]
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        mov dword ptr [ecx + esi*4], eax
        ; Exact immediate encoding: je short L_101001FB
        __asm _emit 0x74
        __asm _emit 0x60
L_1010019B:
        mov eax, dword ptr [edi + 170h]
        inc esi
        cmp esi, eax
        ; Exact immediate encoding: jl near ptr L_100FFEDA
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
L_101001AA:
        mov eax, dword ptr [edi + 164h]
        shl eax, 2
        push eax
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [edi + 18ch], eax
        test eax, eax
        ; Exact immediate encoding: jne short L_1010020D
        __asm _emit 0x75
        __asm _emit 0x47
        mov ecx, dword ptr [esp + 2a8h]
        push ecx
        push 101accf8h
        ; Exact immediate encoding: jmp near ptr L_101015C8
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
L_101001D8:
        mov edx, dword ptr [esp + 2a8h]
        lea eax, [esp + 198h]
        push edx
        push 101acd20h
        push eax
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact immediate encoding: jmp near ptr L_101026A5
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
L_101001FB:
        mov ecx, dword ptr [esp + 2a8h]
        push ecx
        push 101accb8h
        ; Exact immediate encoding: jmp near ptr L_101015C8
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
L_1010020D:
        mov eax, dword ptr [edi + 164h]
        ; Exact immediate encoding: mov dword ptr [esp + 18h], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact immediate encoding: jle near ptr L_10101030
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x0d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
L_10100223:
        mov al, byte ptr [edi + 15ch]
        ; Exact immediate encoding: mov esi, dword ptr [101750b8h]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp al, 2
        ; Exact immediate encoding: je near ptr L_1010036F
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 1
        ; Exact immediate encoding: je near ptr L_1010036F
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 3
        ; Exact immediate encoding: jne near ptr L_1010043F
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edi + 15dh]
        cmp al, 2
        ; Exact immediate encoding: je near ptr L_1010034E
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 3
        ; Exact immediate encoding: je near ptr L_1010034E
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 4]
        lea eax, [esp + 14h]
        push 0
        push eax
        lea ecx, [esp + 124h]
        push 58h
        push ecx
        push edx
        call esi
        test eax, eax
        ; Exact immediate encoding: je near ptr L_1010108B
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 11ch]
        mov cl, byte ptr [esp + 148h]
        mov dl, byte ptr [esp + 149h]
        mov dword ptr [esp + 34h], eax
        mov eax, dword ptr [esp + 14ch]
        mov byte ptr [esp + 60h], cl
        mov ecx, dword ptr [esp + 150h]
        mov dword ptr [esp + 64h], eax
        mov eax, dword ptr [esp + 158h]
        mov byte ptr [esp + 61h], dl
        mov edx, dword ptr [esp + 154h]
        mov dword ptr [esp + 70h], eax
        mov eax, dword ptr [esp + 164h]
        mov dword ptr [esp + 68h], ecx
        mov ecx, dword ptr [esp + 15ch]
        mov dword ptr [esp + 6ch], edx
        mov edx, dword ptr [esp + 160h]
        mov dword ptr [esp + 7ch], eax
        xor eax, eax
        mov dword ptr [esp + 74h], ecx
        mov ecx, dword ptr [esp + 168h]
        mov dword ptr [esp + 78h], edx
        mov edx, dword ptr [esp + 16ch]
        mov dword ptr [esp + 84h], eax
        mov dword ptr [esp + 88h], eax
        mov dword ptr [esp + 8ch], eax
        mov dword ptr [esp + 90h], eax
        mov dword ptr [esp + 94h], eax
        mov eax, dword ptr [esp + 170h]
        ; Exact immediate encoding: mov byte ptr [esp + 38h], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [esp + 80h], 100h
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 98h], ecx
        mov dword ptr [esp + 9ch], edx
        mov dword ptr [esp + 0a0h], eax
        ; Exact immediate encoding: jmp near ptr L_1010043F
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1010034E:
        mov eax, dword ptr [edi + 4]
        lea ecx, [esp + 14h]
        push 0
        push ecx
        lea edx, [esp + 3ch]
        push 70h
        push edx
        push eax
        call esi
        test eax, eax
        ; Exact immediate encoding: je near ptr L_1010109D
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_1010043F
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1010036F:
        mov eax, dword ptr [edi + 4]
        lea ecx, [esp + 14h]
        push 0
        push ecx
        lea edx, [esp + 0c0h]
        push 48h
        push edx
        push eax
        call esi
        test eax, eax
        ; Exact immediate encoding: je near ptr L_101010C0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [esp + 0e4h]
        mov ecx, dword ptr [esp + 0b8h]
        mov al, byte ptr [esp + 0e5h]
        mov byte ptr [esp + 60h], dl
        mov edx, dword ptr [esp + 0f4h]
        mov dword ptr [esp + 34h], ecx
        mov ecx, dword ptr [esp + 0e8h]
        mov dword ptr [esp + 98h], edx
        mov edx, dword ptr [esp + 0f8h]
        mov byte ptr [esp + 61h], al
        mov eax, dword ptr [esp + 0ech]
        mov dword ptr [esp + 9ch], edx
        mov edx, dword ptr [esp + 0fch]
        mov dword ptr [esp + 64h], ecx
        mov ecx, dword ptr [esp + 0f0h]
        mov dword ptr [esp + 0a0h], edx
        xor edx, edx
        ; Exact immediate encoding: mov byte ptr [esp + 38h], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x00
        mov dword ptr [esp + 68h], eax
        mov dword ptr [esp + 6ch], ecx
        mov dword ptr [esp + 70h], edx
        mov dword ptr [esp + 74h], edx
        mov dword ptr [esp + 78h], eax
        mov dword ptr [esp + 7ch], ecx
        ; Exact immediate encoding: mov dword ptr [esp + 80h], 100h
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 84h], edx
        mov dword ptr [esp + 88h], edx
        mov dword ptr [esp + 8ch], edx
        mov dword ptr [esp + 90h], edx
        mov dword ptr [esp + 94h], edx
L_1010043F:
        mov edx, dword ptr [edi + 4]
        lea eax, [esp + 14h]
        push 0
        push eax
        lea ecx, [esp + 38h]
        push 4
        push ecx
        push edx
        call esi
        cmp eax, 1
        ; Exact immediate encoding: jne near ptr L_1010114A
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: test dword ptr [101acda8h], 800000h
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10100762
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov eax, dword ptr [101acdb4h]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp eax, 2
        ; Exact immediate encoding: jne near ptr L_101005E6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov eax, dword ptr [101c9310h]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test ah, 80h
        mov eax, dword ptr [esp + 60h]
        ; Exact immediate encoding: je near ptr L_10100539
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        sub eax, 0
        ; Exact immediate encoding: je short L_10100506
        __asm _emit 0x74
        __asm _emit 0x70
        dec eax
        ; Exact immediate encoding: je short L_101004D3
        __asm _emit 0x74
        __asm _emit 0x3a
        dec eax
        ; Exact immediate encoding: jne near ptr L_10100767
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 5
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10100733
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_1015a830
        ; Exact immediate encoding: jmp near ptr L_10100735
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_101004D3:
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 4
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10100733
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_1014dec0
        ; Exact immediate encoding: jmp near ptr L_10100735
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_10100506:
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 3
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10100733
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_10148170
        ; Exact immediate encoding: jmp near ptr L_10100735
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10100539:
        and eax, 0ffh
        sub eax, 0
        ; Exact immediate encoding: je short L_101005B3
        __asm _emit 0x74
        __asm _emit 0x70
        dec eax
        ; Exact immediate encoding: je short L_10100580
        __asm _emit 0x74
        __asm _emit 0x3a
        dec eax
        ; Exact immediate encoding: jne near ptr L_10100767
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 8
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10100733
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_1013b830
        ; Exact immediate encoding: jmp near ptr L_10100735
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10100580:
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 7
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10100733
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_1012f0c0
        ; Exact immediate encoding: jmp near ptr L_10100735
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_101005B3:
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 6
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10100733
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_10129480
        ; Exact immediate encoding: jmp near ptr L_10100735
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_101005E6:
        cmp eax, 3
        ; Exact immediate encoding: jne near ptr L_101006A0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 60h]
        and eax, 0ffh
        sub eax, 0
        ; Exact immediate encoding: je short L_1010066D
        __asm _emit 0x74
        __asm _emit 0x70
        dec eax
        ; Exact immediate encoding: je short L_1010063A
        __asm _emit 0x74
        __asm _emit 0x3a
        dec eax
        ; Exact immediate encoding: jne near ptr L_10100767
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 0bh
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10100733
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_101221b0
        ; Exact immediate encoding: jmp near ptr L_10100735
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1010063A:
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 0ah
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10100733
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_1011b0e0
        ; Exact immediate encoding: jmp near ptr L_10100735
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1010066D:
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 9
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10100733
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_101182f0
        ; Exact immediate encoding: jmp near ptr L_10100735
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_101006A0:
        cmp eax, 4
        ; Exact immediate encoding: jne near ptr L_1010074F
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 60h]
        and eax, 0ffh
        sub eax, 0
        ; Exact immediate encoding: je short L_1010070D
        __asm _emit 0x74
        __asm _emit 0x56
        dec eax
        ; Exact immediate encoding: je short L_101006E7
        __asm _emit 0x74
        __asm _emit 0x2d
        dec eax
        ; Exact immediate encoding: jne near ptr L_10100767
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 0eh
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je short L_10100733
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, eax
        call FUN_101121a0
        ; Exact immediate encoding: jmp short L_10100735
        __asm _emit 0xeb
        __asm _emit 0x4e
L_101006E7:
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 0dh
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je short L_10100733
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, eax
        call FUN_1010c290
        ; Exact immediate encoding: jmp short L_10100735
        __asm _emit 0xeb
        __asm _emit 0x28
L_1010070D:
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 0ch
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je short L_10100733
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        call FUN_10109ca0
        ; Exact immediate encoding: jmp short L_10100735
        __asm _emit 0xeb
        __asm _emit 0x02
L_10100733:
        xor eax, eax
L_10100735:
        mov edx, dword ptr [edi + 18ch]
        mov ecx, dword ptr [esp + 18h]
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edx + ecx*4], eax
        ; Exact immediate encoding: jmp short L_1010076B
        __asm _emit 0xeb
        __asm _emit 0x1c
L_1010074F:
        mov eax, dword ptr [edi + 18ch]
        mov ecx, dword ptr [esp + 18h]
        ; Exact immediate encoding: mov dword ptr [eax + ecx*4], 0
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp short L_1010076B
        __asm _emit 0xeb
        __asm _emit 0x09
L_10100762:
        ; Exact immediate encoding: mov byte ptr [esp + 60h], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
L_10100767:
        mov ecx, dword ptr [esp + 18h]
L_1010076B:
        mov edx, dword ptr [edi + 18ch]
        mov eax, dword ptr [edx + ecx*4]
        mov edx, dword ptr [esp + 68h]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [edi + 18ch]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [esp + 6ch]
        mov dword ptr [edx + 8], eax
        mov edx, dword ptr [edi + 18ch]
        mov eax, dword ptr [edx + ecx*4]
        mov edx, dword ptr [esp + 70h]
        add eax, 18h
        mov dword ptr [eax], edx
        mov edx, dword ptr [esp + 74h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 78h]
        mov dword ptr [eax + 8], edx
        mov edx, dword ptr [esp + 7ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [edi + 18ch]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [esp + 88h]
        mov dword ptr [edx + 10h], eax
        mov eax, dword ptr [esp + 8ch]
        mov dword ptr [edx + 14h], eax
        mov edx, dword ptr [edi + 18ch]
        mov eax, dword ptr [edx + ecx*4]
        mov edx, dword ptr [esp + 80h]
        mov dword ptr [eax + 28h], edx
        mov eax, dword ptr [edi + 18ch]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [esp + 84h]
        mov dword ptr [edx + 2ch], eax
        mov edx, dword ptr [edi + 18ch]
        mov eax, dword ptr [edx + ecx*4]
        mov edx, dword ptr [esp + 90h]
        mov dword ptr [eax + 30h], edx
        mov eax, dword ptr [edi + 18ch]
        mov edx, dword ptr [esp + 94h]
        mov ecx, dword ptr [eax + ecx*4]
        mov dword ptr [ecx + 30h], edx
        ; Exact immediate encoding: mov ecx, dword ptr [101acdb4h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp ecx, 2
        ; Exact immediate encoding: jne near ptr L_10100E09
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 61h]
        cmp al, 3
        ; Exact immediate encoding: jne near ptr L_10100CDC
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 64h]
        mov ecx, dword ptr [esp + 2ch]
        cmp eax, ecx
        ; Exact immediate encoding: jle short L_10100865
        __asm _emit 0x7e
        __asm _emit 0x23
        mov esi, eax
        push ebp
        mov dword ptr [esp + 30h], esi
        call FUN_1016cd44
        push esi
        call FUN_1016cd4a
        mov ebp, eax
        add esp, 8
        test ebp, ebp
        ; Exact immediate encoding: je near ptr L_101010E3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 64h]
L_10100865:
        mov edx, dword ptr [edi + 4]
        lea ecx, [esp + 14h]
        push 0
        push ecx
        push eax
        push ebp
        push edx
        ; Exact immediate encoding: call dword ptr [101750b8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact immediate encoding: je near ptr L_101010F5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 60h]
        cmp al, 2
        ; Exact immediate encoding: jne near ptr L_10100A59
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 6ch]
        mov ecx, dword ptr [esp + 61h]
        imul eax, dword ptr [esp + 68h]
        ; Exact immediate encoding: imul eax, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        and ecx, 0ffh
        xor esi, esi
        lea eax, [eax + eax*2]
        mov dword ptr [esp + 1ch], esi
        shl eax, 1
        cdq
        idiv ecx
        cmp eax, dword ptr [esp + 20h]
        ; Exact immediate encoding: jle short L_101008DB
        __asm _emit 0x7e
        __asm _emit 0x21
        push ebx
        mov dword ptr [esp + 24h], eax
        call FUN_1016cd44
        mov edx, dword ptr [esp + 24h]
        push edx
        call FUN_1016cd4a
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        ; Exact immediate encoding: je near ptr L_10101118
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
L_101008DB:
        ; Exact immediate encoding: mov eax, dword ptr [101c9310h]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test ah, 80h
        ; Exact immediate encoding: je near ptr L_10100991
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
L_101008ED:
        mov cx, word ptr [esi + ebp]
        test cx, cx
        ; Exact immediate encoding: jl short L_10100974
        __asm _emit 0x7c
        __asm _emit 0x7e
L_101008F6:
        ; Exact immediate encoding: imul ecx, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add esi, 3
        mov word ptr [eax + ebx], cx
        add eax, 3
        mov cx, word ptr [esi + ebp]
        add esi, 2
        mov edx, ecx
        add eax, 2
        ; Exact immediate encoding: imul edx, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        mov word ptr [eax + ebx - 2], dx
        test cx, cx
        ; Exact immediate encoding: je short L_1010096B
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact immediate encoding: movsx edi, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xf9
L_10100927:
        ; Exact immediate encoding: movsx cx, byte ptr [esi + ebp + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x2e
        __asm _emit 0x02
        mov dl, byte ptr [esi + ebp + 1]
        and ecx, 0fff8h
        shl ecx, 5
        and edx, 0fch
        or ecx, edx
        mov dl, byte ptr [esi + ebp]
        shr dl, 3
        shl ecx, 3
        and edx, 1fh
        or ecx, edx
        mov word ptr [eax + ebx], cx
        mov ecx, dword ptr [esp + 61h]
        ; Exact immediate encoding: mov edx, dword ptr [101acdb4h]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        and ecx, 0ffh
        add esi, ecx
        add eax, edx
        dec edi
        ; Exact immediate encoding: jne short L_10100927
        __asm _emit 0x75
        __asm _emit 0xbc
L_1010096B:
        mov cx, word ptr [esi + ebp]
        test cx, cx
        ; Exact immediate encoding: jge short L_101008F6
        __asm _emit 0x7d
        __asm _emit 0x82
L_10100974:
        mov cx, word ptr [esi + ebp]
        cmp cx, -2
        ; Exact immediate encoding: je near ptr L_10100A33
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov word ptr [eax + ebx], cx
        add esi, 2
        add eax, 2
        ; Exact immediate encoding: jmp near ptr L_101008ED
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10100991:
        mov edi, dword ptr [esp + 1ch]
L_10100995:
        mov ax, word ptr [esi + ebp]
        test ax, ax
        ; Exact immediate encoding: jl short L_10100A1A
        __asm _emit 0x7c
        __asm _emit 0x7c
L_1010099E:
        ; Exact immediate encoding: imul eax, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add esi, 3
        mov word ptr [edi + ebx], ax
        add edi, 3
        mov ax, word ptr [esi + ebp]
        add esi, 2
        mov edx, eax
        add edi, 2
        ; Exact immediate encoding: imul edx, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        mov word ptr [edi + ebx - 2], dx
        test ax, ax
        ; Exact immediate encoding: je short L_10100A11
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact immediate encoding: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
L_101009CF:
        mov cl, byte ptr [esi + ebp + 2]
        mov dl, byte ptr [esi + ebp + 1]
        and ecx, 0f8h
        and edx, 0f8h
        shl ecx, 5
        or ecx, edx
        mov dl, byte ptr [esi + ebp]
        shr dl, 3
        shl ecx, 2
        and edx, 1fh
        or ecx, edx
        mov word ptr [edi + ebx], cx
        mov ecx, dword ptr [esp + 61h]
        ; Exact immediate encoding: mov edx, dword ptr [101acdb4h]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        and ecx, 0ffh
        add esi, ecx
        add edi, edx
        dec eax
        ; Exact immediate encoding: jne short L_101009CF
        __asm _emit 0x75
        __asm _emit 0xbe
L_10100A11:
        mov ax, word ptr [esi + ebp]
        test ax, ax
        ; Exact immediate encoding: jge short L_1010099E
        __asm _emit 0x7d
        __asm _emit 0x84
L_10100A1A:
        mov ax, word ptr [esi + ebp]
        cmp ax, -2
        ; Exact immediate encoding: je short L_10100A46
        __asm _emit 0x74
        __asm _emit 0x22
        mov word ptr [edi + ebx], ax
        add esi, 2
        add edi, 2
        ; Exact immediate encoding: jmp near ptr L_10100995
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10100A33:
        mov dx, word ptr [esi + ebp]
        mov esi, eax
        mov dword ptr [esp + 1ch], eax
        mov word ptr [esi + ebx], dx
        ; Exact immediate encoding: jmp near ptr L_10100FD7
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
L_10100A46:
        mov dx, word ptr [esi + ebp]
        mov esi, edi
        mov dword ptr [esp + 1ch], edi
        mov word ptr [esi + ebx], dx
        ; Exact immediate encoding: jmp near ptr L_10100FD7
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
L_10100A59:
        cmp al, 1
        ; Exact immediate encoding: jne near ptr L_10100C1C
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 6ch]
        mov ecx, dword ptr [esp + 61h]
        imul eax, dword ptr [esp + 68h]
        ; Exact immediate encoding: imul eax, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        and ecx, 0ffh
        xor esi, esi
        lea eax, [eax + eax*2]
        mov dword ptr [esp + 1ch], esi
        shl eax, 1
        cdq
        idiv ecx
        cmp eax, dword ptr [esp + 20h]
        ; Exact immediate encoding: jl short L_10100AB0
        __asm _emit 0x7c
        __asm _emit 0x21
        push ebx
        mov dword ptr [esp + 24h], eax
        call FUN_1016cd44
        mov edx, dword ptr [esp + 24h]
        push edx
        call FUN_1016cd4a
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        ; Exact immediate encoding: je near ptr L_101010E3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
L_10100AB0:
        ; Exact immediate encoding: mov eax, dword ptr [101c9310h]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test ah, 80h
        ; Exact immediate encoding: je near ptr L_10100B65
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
L_10100AC2:
        mov cx, word ptr [esi + ebp]
        test cx, cx
        ; Exact immediate encoding: jl short L_10100B49
        __asm _emit 0x7c
        __asm _emit 0x7e
L_10100ACB:
        ; Exact immediate encoding: imul ecx, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add esi, 3
        mov word ptr [eax + ebx], cx
        add eax, 3
        mov cx, word ptr [esi + ebp]
        add esi, 2
        mov edx, ecx
        add eax, 2
        ; Exact immediate encoding: imul edx, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        mov word ptr [eax + ebx - 2], dx
        test cx, cx
        ; Exact immediate encoding: je short L_10100B40
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact immediate encoding: movsx edi, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xf9
L_10100AFC:
        ; Exact immediate encoding: movsx cx, byte ptr [esi + ebp + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x2e
        __asm _emit 0x02
        mov dl, byte ptr [esi + ebp + 1]
        and ecx, 0fff8h
        shl ecx, 5
        and edx, 0fch
        or ecx, edx
        mov dl, byte ptr [esi + ebp]
        shr dl, 3
        shl ecx, 3
        and edx, 1fh
        or ecx, edx
        mov word ptr [eax + ebx], cx
        mov ecx, dword ptr [esp + 61h]
        ; Exact immediate encoding: mov edx, dword ptr [101acdb4h]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        and ecx, 0ffh
        add esi, ecx
        add eax, edx
        dec edi
        ; Exact immediate encoding: jne short L_10100AFC
        __asm _emit 0x75
        __asm _emit 0xbc
L_10100B40:
        mov cx, word ptr [esi + ebp]
        test cx, cx
        ; Exact immediate encoding: jge short L_10100ACB
        __asm _emit 0x7d
        __asm _emit 0x82
L_10100B49:
        cmp word ptr [esi + ebp], -2
        ; Exact immediate encoding: je near ptr L_10100C06
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov word ptr [eax + ebx], 0ffffh
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, 2
        add eax, 2
        ; Exact immediate encoding: jmp near ptr L_10100AC2
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10100B65:
        mov edi, dword ptr [esp + 1ch]
L_10100B69:
        mov ax, word ptr [esi + ebp]
        test ax, ax
        ; Exact immediate encoding: jl short L_10100BEE
        __asm _emit 0x7c
        __asm _emit 0x7c
L_10100B72:
        ; Exact immediate encoding: imul eax, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add esi, 3
        mov word ptr [edi + ebx], ax
        add edi, 3
        mov ax, word ptr [esi + ebp]
        add esi, 2
        mov edx, eax
        add edi, 2
        ; Exact immediate encoding: imul edx, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        mov word ptr [edi + ebx - 2], dx
        test ax, ax
        ; Exact immediate encoding: je short L_10100BE5
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact immediate encoding: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
L_10100BA3:
        mov cl, byte ptr [esi + ebp + 2]
        mov dl, byte ptr [esi + ebp + 1]
        and ecx, 0f8h
        and edx, 0f8h
        shl ecx, 5
        or ecx, edx
        mov dl, byte ptr [esi + ebp]
        shr dl, 3
        shl ecx, 2
        and edx, 1fh
        or ecx, edx
        mov word ptr [edi + ebx], cx
        mov ecx, dword ptr [esp + 61h]
        ; Exact immediate encoding: mov edx, dword ptr [101acdb4h]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        and ecx, 0ffh
        add esi, ecx
        add edi, edx
        dec eax
        ; Exact immediate encoding: jne short L_10100BA3
        __asm _emit 0x75
        __asm _emit 0xbe
L_10100BE5:
        mov ax, word ptr [esi + ebp]
        test ax, ax
        ; Exact immediate encoding: jge short L_10100B72
        __asm _emit 0x7d
        __asm _emit 0x84
L_10100BEE:
        cmp word ptr [esi + ebp], -2
        ; Exact immediate encoding: je short L_10100C11
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact immediate encoding: mov word ptr [edi + ebx], 0ffffh
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, 2
        add edi, 2
        ; Exact immediate encoding: jmp near ptr L_10100B69
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10100C06:
        mov dword ptr [esp + 1ch], eax
        mov esi, eax
        ; Exact immediate encoding: jmp near ptr L_10100FD1
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_10100C11:
        mov dword ptr [esp + 1ch], edi
        mov esi, edi
        ; Exact immediate encoding: jmp near ptr L_10100FD1
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_10100C1C:
        test al, al
        ; Exact immediate encoding: jne near ptr L_10101019
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 6ch]
        ; Exact immediate encoding: mov ecx, dword ptr [101c9310h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        imul eax, dword ptr [esp + 68h]
        xor edi, edi
        xor esi, esi
        test ch, 80h
        ; Exact immediate encoding: je short L_10100C8D
        __asm _emit 0x74
        __asm _emit 0x51
        test eax, eax
        ; Exact immediate encoding: je near ptr L_10100FD1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_10100C44:
        ; Exact immediate encoding: movsx cx, byte ptr [edi + ebp + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x2f
        __asm _emit 0x02
        mov dl, byte ptr [edi + ebp + 1]
        and ecx, 0fff8h
        shl ecx, 5
        and edx, 0fch
        or ecx, edx
        mov dl, byte ptr [edi + ebp]
        shr dl, 3
        shl ecx, 3
        and edx, 1fh
        or ecx, edx
        mov word ptr [esi + ebx], cx
        mov ecx, dword ptr [esp + 61h]
        ; Exact immediate encoding: mov edx, dword ptr [101acdb4h]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        and ecx, 0ffh
        add edi, ecx
        add esi, edx
        dec eax
        ; Exact immediate encoding: jne short L_10100C44
        __asm _emit 0x75
        __asm _emit 0xbc
        ; Exact immediate encoding: jmp near ptr L_10100FD1
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_10100C8D:
        test eax, eax
        ; Exact immediate encoding: je near ptr L_10100FD1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_10100C95:
        mov dl, byte ptr [edi + ebp + 2]
        mov cl, byte ptr [edi + ebp + 1]
        and edx, 0f8h
        and ecx, 0f8h
        shl edx, 5
        or edx, ecx
        mov cl, byte ptr [edi + ebp]
        shr cl, 3
        shl edx, 2
        and ecx, 1fh
        or edx, ecx
        mov word ptr [esi + ebx], dx
        mov edx, dword ptr [esp + 61h]
        and edx, 0ffh
        add edi, edx
        ; Exact immediate encoding: mov edx, dword ptr [101acdb4h]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add esi, edx
        dec eax
        ; Exact immediate encoding: jne short L_10100C95
        __asm _emit 0x75
        __asm _emit 0xbe
        ; Exact immediate encoding: jmp near ptr L_10100FD1
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_10100CDC:
        cmp al, 2
        ; Exact immediate encoding: jne near ptr L_10101019
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 64h]
        push ecx
        call FUN_1016cd4a
        mov edx, dword ptr [edi + 18ch]
        mov esi, eax
        mov eax, dword ptr [esp + 1ch]
        add esp, 4
        mov ecx, dword ptr [edx + eax*4]
        lea edx, [esp + 14h]
        push 0
        push edx
        mov dword ptr [ecx + 0ch], esi
        mov eax, dword ptr [esp + 6ch]
        mov ecx, dword ptr [edi + 4]
        push eax
        push esi
        push ecx
        ; Exact immediate encoding: call dword ptr [101750b8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact immediate encoding: je near ptr L_101010F5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov eax, dword ptr [101c9310h]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test ah, 80h
        ; Exact immediate encoding: jne near ptr L_10101019
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 60h]
        cmp al, 2
        ; Exact immediate encoding: jne short L_10100D82
        __asm _emit 0x75
        __asm _emit 0x4a
L_10100D38:
        cmp word ptr [esi], 0
        ; Exact immediate encoding: jl short L_10100D73
        __asm _emit 0x7c
        __asm _emit 0x35
L_10100D3E:
        mov cx, word ptr [esi + 3]
        add esi, 3
        add esi, 2
        test cx, cx
        ; Exact immediate encoding: je short L_10100D6D
        __asm _emit 0x74
        __asm _emit 0x20
L_10100D4D:
        mov ax, word ptr [esi]
        sub ecx, 2
        mov edx, eax
        and eax, 1fh
        shr edx, 1
        and edx, 7fe0h
        add esi, 2
        or edx, eax
        test cx, cx
        mov word ptr [ebx], dx
        ; Exact immediate encoding: jne short L_10100D4D
        __asm _emit 0x75
        __asm _emit 0xe0
L_10100D6D:
        cmp word ptr [esi], 0
        ; Exact immediate encoding: jge short L_10100D3E
        __asm _emit 0x7d
        __asm _emit 0xcb
L_10100D73:
        cmp word ptr [esi], -2
        ; Exact immediate encoding: je near ptr L_10101019
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        ; Exact immediate encoding: jmp short L_10100D38
        __asm _emit 0xeb
        __asm _emit 0xb6
L_10100D82:
        cmp al, 1
        ; Exact immediate encoding: jne short L_10100DD0
        __asm _emit 0x75
        __asm _emit 0x4a
L_10100D86:
        cmp word ptr [esi], 0
        ; Exact immediate encoding: jl short L_10100DC1
        __asm _emit 0x7c
        __asm _emit 0x35
L_10100D8C:
        mov cx, word ptr [esi + 3]
        add esi, 3
        add esi, 2
        test cx, cx
        ; Exact immediate encoding: je short L_10100DBB
        __asm _emit 0x74
        __asm _emit 0x20
L_10100D9B:
        mov ax, word ptr [esi]
        sub ecx, 2
        mov edx, eax
        and eax, 1fh
        shr edx, 1
        and edx, 7fe0h
        add esi, 2
        or edx, eax
        test cx, cx
        mov word ptr [ebx], dx
        ; Exact immediate encoding: jne short L_10100D9B
        __asm _emit 0x75
        __asm _emit 0xe0
L_10100DBB:
        cmp word ptr [esi], 0
        ; Exact immediate encoding: jge short L_10100D8C
        __asm _emit 0x7d
        __asm _emit 0xcb
L_10100DC1:
        cmp word ptr [esi], -2
        ; Exact immediate encoding: je near ptr L_10101019
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 2
        ; Exact immediate encoding: jmp short L_10100D86
        __asm _emit 0xeb
        __asm _emit 0xb6
L_10100DD0:
        test al, al
        ; Exact immediate encoding: jne near ptr L_10101019
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 6ch]
        imul ecx, dword ptr [esp + 68h]
        test ecx, ecx
        ; Exact immediate encoding: je near ptr L_10101019
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_10100DE9:
        mov ax, word ptr [esi]
        add esi, 2
        mov edx, eax
        and eax, 1fh
        shr edx, 1
        and edx, 7fe0h
        or edx, eax
        dec ecx
        mov word ptr [ebx], dx
        ; Exact immediate encoding: jne short L_10100DE9
        __asm _emit 0x75
        __asm _emit 0xe5
        ; Exact immediate encoding: jmp near ptr L_10101019
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_10100E09:
        cmp ecx, 3
        ; Exact immediate encoding: jl near ptr L_10101019
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 60h]
        cmp al, 2
        ; Exact immediate encoding: jne near ptr L_10100ED3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        xor edi, edi
L_10100E22:
        mov cx, word ptr [eax + ebp]
        test cx, cx
        ; Exact immediate encoding: jl short L_10100E82
        __asm _emit 0x7c
        __asm _emit 0x57
L_10100E2B:
        ; Exact immediate encoding: imul ecx, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add eax, 3
        mov word ptr [edi + ebx], cx
        add edi, 3
        mov cx, word ptr [eax + ebp]
        add eax, 2
        mov edx, ecx
        add edi, 2
        ; Exact immediate encoding: imul edx, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        mov word ptr [edi + ebx - 2], dx
        test cx, cx
        ; Exact immediate encoding: je short L_10100E79
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact immediate encoding: movsx ecx, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc9
L_10100E5C:
        mov edx, dword ptr [eax + ebp]
        mov dword ptr [edi + ebx], edx
        mov edx, dword ptr [esp + 61h]
        ; Exact immediate encoding: mov esi, dword ptr [101acdb4h]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        and edx, 0ffh
        add eax, edx
        add edi, esi
        dec ecx
        ; Exact immediate encoding: jne short L_10100E5C
        __asm _emit 0x75
        __asm _emit 0xe3
L_10100E79:
        mov cx, word ptr [eax + ebp]
        test cx, cx
        ; Exact immediate encoding: jge short L_10100E2B
        __asm _emit 0x7d
        __asm _emit 0xa9
L_10100E82:
        mov cx, word ptr [eax + ebp]
        cmp cx, -2
        ; Exact immediate encoding: je short L_10100E98
        __asm _emit 0x74
        __asm _emit 0x0c
        mov word ptr [edi + ebx], cx
        add eax, 2
        add edi, 2
        ; Exact immediate encoding: jmp short L_10100E22
        __asm _emit 0xeb
        __asm _emit 0x8a
L_10100E98:
        mov ax, word ptr [eax + ebp]
        mov word ptr [edi + ebx], ax
        add edi, 2
        push edi
        call FUN_1016cd4a
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 1ch]
        add esp, 4
        mov esi, ebx
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + edx*4]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esp + 10h]
        mov ecx, edi
        mov eax, dword ptr [eax + 18ch]
        ; Exact immediate encoding: jmp near ptr L_10101001
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10100ED3:
        cmp al, 1
        ; Exact immediate encoding: jne near ptr L_10100F9F
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 6ch]
        xor esi, esi
        imul eax, dword ptr [esp + 68h]
        imul eax, ecx
        mov ecx, dword ptr [esp + 61h]
        mov dword ptr [esp + 24h], esi
        lea eax, [eax + eax*2]
        and ecx, 0ffh
        shl eax, 1
        cdq
        idiv ecx
        cmp eax, dword ptr [esp + 20h]
        ; Exact immediate encoding: jl short L_10100F26
        __asm _emit 0x7c
        __asm _emit 0x21
        push ebx
        mov dword ptr [esp + 24h], eax
        call FUN_1016cd44
        mov edx, dword ptr [esp + 24h]
        push edx
        call FUN_1016cd4a
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        ; Exact immediate encoding: je near ptr L_10101127
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_10100F26:
        mov eax, dword ptr [esp + 24h]
L_10100F2A:
        mov cx, word ptr [eax + ebp]
        test cx, cx
        ; Exact immediate encoding: jl short L_10100F8A
        __asm _emit 0x7c
        __asm _emit 0x57
L_10100F33:
        ; Exact immediate encoding: imul ecx, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add eax, 3
        mov word ptr [esi + ebx], cx
        add esi, 3
        mov cx, word ptr [eax + ebp]
        add eax, 2
        mov edx, ecx
        add esi, 2
        ; Exact immediate encoding: imul edx, dword ptr [101acdb4h]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        mov word ptr [esi + ebx - 2], dx
        test cx, cx
        ; Exact immediate encoding: je short L_10100F81
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact immediate encoding: movsx ecx, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc9
L_10100F64:
        mov edx, dword ptr [eax + ebp]
        mov dword ptr [esi + ebx], edx
        mov edx, dword ptr [esp + 61h]
        ; Exact immediate encoding: mov edi, dword ptr [101acdb4h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        and edx, 0ffh
        add eax, edx
        add esi, edi
        dec ecx
        ; Exact immediate encoding: jne short L_10100F64
        __asm _emit 0x75
        __asm _emit 0xe3
L_10100F81:
        mov cx, word ptr [eax + ebp]
        test cx, cx
        ; Exact immediate encoding: jge short L_10100F33
        __asm _emit 0x7d
        __asm _emit 0xa9
L_10100F8A:
        cmp word ptr [eax + ebp], -2
        ; Exact immediate encoding: je short L_10100FD1
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact immediate encoding: mov word ptr [esi + ebx], 0ffffh
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 2
        add esi, 2
        ; Exact immediate encoding: jmp short L_10100F2A
        __asm _emit 0xeb
        __asm _emit 0x8b
L_10100F9F:
        test al, al
        ; Exact immediate encoding: jne short L_10101019
        __asm _emit 0x75
        __asm _emit 0x76
        mov ecx, dword ptr [esp + 6ch]
        xor eax, eax
        imul ecx, dword ptr [esp + 68h]
        xor esi, esi
        test ecx, ecx
        ; Exact immediate encoding: je short L_10100FD1
        __asm _emit 0x74
        __asm _emit 0x1d
L_10100FB4:
        mov edx, dword ptr [eax + ebp]
        mov dword ptr [esi + ebx], edx
        mov edx, dword ptr [esp + 61h]
        ; Exact immediate encoding: mov edi, dword ptr [101acdb4h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        and edx, 0ffh
        add eax, edx
        add esi, edi
        dec ecx
        ; Exact immediate encoding: jne short L_10100FB4
        __asm _emit 0x75
        __asm _emit 0xe3
L_10100FD1:
        ; Exact immediate encoding: mov word ptr [esi + ebx], -2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
L_10100FD7:
        add esi, 2
        push esi
        call FUN_1016cd4a
        mov edi, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 1ch]
        add esp, 4
        mov ecx, dword ptr [edi + 18ch]
        mov ecx, dword ptr [ecx + edx*4]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [edi + 18ch]
        mov ecx, esi
        mov esi, ebx
L_10101001:
        mov edx, dword ptr [eax + edx*4]
        mov eax, ecx
        shr ecx, 2
        mov edi, dword ptr [edx + 0ch]
        ; Exact immediate encoding: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        and ecx, 3
        ; Exact immediate encoding: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov edi, dword ptr [esp + 10h]
L_10101019:
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [edi + 164h]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 18h], eax
        ; Exact immediate encoding: jl near ptr L_10100223
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf3
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
L_10101030:
        mov esi, dword ptr [edi + 160h]
        test esi, esi
        ; Exact immediate encoding: jle near ptr L_10101A40
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        shl eax, 6
        add eax, 4
        push eax
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 0fh
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_1010115C
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 100ff9b0h
        mov dword ptr [eax], esi
        push 101027b0h
        add eax, 4
        push esi
        push 40h
        push eax
        mov dword ptr [esp + 38h], eax
        call FUN_1016caa0
        mov eax, dword ptr [esp + 24h]
        ; Exact immediate encoding: jmp near ptr L_1010115E
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1010108B:
        mov ecx, dword ptr [esp + 2a8h]
        push ecx
        push 101acc80h
        ; Exact immediate encoding: jmp near ptr L_101015C8
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
L_1010109D:
        mov eax, dword ptr [esp + 2a8h]
        lea ecx, [esp + 198h]
        push eax
        push 101acc54h
        push ecx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact immediate encoding: jmp near ptr L_101026A5
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
L_101010C0:
        mov edx, dword ptr [esp + 2a8h]
        push edx
        push 101acc54h
L_101010CD:
        lea eax, [esp + 1a0h]
        push eax
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact immediate encoding: jmp near ptr L_101026A5
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
L_101010E3:
        mov ecx, dword ptr [esp + 2a8h]
        push ecx
        push 101acc2ch
        ; Exact immediate encoding: jmp near ptr L_101015C8
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
L_101010F5:
        mov eax, dword ptr [esp + 2a8h]
        lea ecx, [esp + 198h]
        push eax
        push 101acc04h
        push ecx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact immediate encoding: jmp near ptr L_101026A5
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
L_10101118:
        mov edx, dword ptr [esp + 2a8h]
        push edx
        push 101acc2ch
        ; Exact immediate encoding: jmp short L_101010CD
        __asm _emit 0xeb
        __asm _emit 0xa6
L_10101127:
        mov edx, dword ptr [esp + 2a8h]
        lea eax, [esp + 198h]
        push edx
        push 101acc2ch
        push eax
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact immediate encoding: jmp near ptr L_101026A5
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
L_1010114A:
        mov ecx, dword ptr [esp + 2a8h]
        push ecx
        push 101acbd0h
        ; Exact immediate encoding: jmp near ptr L_101015C8
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
L_1010115C:
        xor eax, eax
L_1010115E:
        xor ecx, ecx
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, ecx
        mov dword ptr [edi + 190h], eax
        ; Exact immediate encoding: jne short L_10101187
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [esp + 2a8h]
        push ecx
        push 101acba8h
        ; Exact immediate encoding: jmp near ptr L_101015C8
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
L_10101187:
        mov al, byte ptr [edi + 15dh]
        test al, al
        ; Exact immediate encoding: je near ptr L_10101601
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 1
        ; Exact immediate encoding: je near ptr L_10101601
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 2
        ; Exact immediate encoding: je short L_101011A9
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, 3
        ; Exact immediate encoding: jne near ptr L_10101542
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_101011A9:
        mov eax, dword ptr [edi + 160h]
        mov dword ptr [esp + 18h], ecx
        cmp eax, ecx
        ; Exact immediate encoding: jle near ptr L_10101542
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
L_101011BD:
        mov edx, dword ptr [edi + 4]
        lea eax, [esp + 14h]
        push 0
        push eax
        lea ecx, [esp + 124h]
        push 5ch
        push ecx
        push edx
        ; Exact immediate encoding: call dword ptr [101750b8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact immediate encoding: je near ptr L_101019B3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 4]
        lea eax, [esp + 14h]
        push 0
        push eax
        lea ecx, [esp + 38h]
        push 4
        push ecx
        push edx
        ; Exact immediate encoding: call dword ptr [101750b8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, 1
        ; Exact immediate encoding: jne near ptr L_101015DE
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 15ah]
        and eax, 0ffffh
        shl eax, 2
        push eax
        call AllocateObjectThunk
        mov dword ptr [esp + 30h], eax
        mov eax, dword ptr [esp + 15eh]
        and eax, 0ffffh
        lea ecx, [eax + eax*8]
        shl ecx, 2
        push ecx
        call AllocateObjectThunk
        mov edx, dword ptr [edi + 190h]
        add esp, 8
        mov dword ptr [esi + edx + 10h], eax
        mov al, byte ptr [edi + 15dh]
        cmp al, 2
        ; Exact immediate encoding: jne near ptr L_101013AF
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp word ptr [esp + 15ah], 0
        ; Exact immediate encoding: mov dword ptr [esp + 10h], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jbe near ptr L_10101466
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        ; Exact immediate encoding: mov dword ptr [esp + 24h], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 1ch], eax
L_10101274:
        mov eax, dword ptr [edi + 4]
        lea ecx, [esp + 14h]
        push 0
        push ecx
        lea edx, [esp + 28h]
        push 4
        push edx
        push eax
        ; Exact immediate encoding: call dword ptr [101750b8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact immediate encoding: je near ptr L_101019D6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        lea ecx, [esp + 14h]
        push 0
        push ecx
        lea edx, [esp + 180h]
        push 20h
        push edx
        push eax
        ; Exact immediate encoding: call dword ptr [101750b8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact immediate encoding: je near ptr L_10101575
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 190h]
        mov eax, dword ptr [esp + 24h]
        add eax, 24h
        mov edx, dword ptr [esi + ecx + 10h]
        mov ecx, dword ptr [esp + 178h]
        mov dword ptr [esp + 24h], eax
        mov dword ptr [edx + eax - 24h], ecx
        mov ecx, dword ptr [esp + 17ch]
        mov dword ptr [edx + eax - 20h], ecx
        mov edx, dword ptr [edi + 190h]
        mov ecx, dword ptr [esi + edx + 10h]
        mov edx, dword ptr [esp + 180h]
        mov dword ptr [ecx + eax - 1ch], edx
        mov ecx, dword ptr [edi + 190h]
        mov edx, dword ptr [esi + ecx + 10h]
        mov ecx, dword ptr [esp + 184h]
        mov dword ptr [edx + eax - 18h], ecx
        mov edx, dword ptr [edi + 190h]
        mov ecx, dword ptr [esi + edx + 10h]
        ; Exact immediate encoding: mov dword ptr [ecx + eax - 14h], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [edi + 190h]
        mov ecx, dword ptr [esi + edx + 10h]
        mov edx, dword ptr [esp + 188h]
        mov dword ptr [ecx + eax - 10h], edx
        mov ecx, dword ptr [edi + 190h]
        mov edx, dword ptr [esi + ecx + 10h]
        mov ecx, dword ptr [esp + 18ch]
        mov dword ptr [edx + eax - 0ch], ecx
        mov edx, dword ptr [edi + 190h]
        mov ecx, dword ptr [esi + edx + 10h]
        mov edx, dword ptr [esp + 190h]
        mov dword ptr [ecx + eax - 8], edx
        mov ecx, dword ptr [edi + 190h]
        mov edx, dword ptr [esi + ecx + 10h]
        mov ecx, dword ptr [esp + 194h]
        mov dword ptr [edx + eax - 4], ecx
        mov edx, dword ptr [edi + 18ch]
        mov ecx, dword ptr [esp + 20h]
        mov ecx, dword ptr [edx + ecx*4]
        mov edx, dword ptr [esp + 1ch]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 10h]
        add edx, 4
        inc ecx
        mov dword ptr [esp + 1ch], edx
        mov edx, dword ptr [esp + 15ah]
        and edx, 0ffffh
        mov dword ptr [esp + 10h], ecx
        cmp ecx, edx
        ; Exact immediate encoding: jl near ptr L_10101274
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact immediate encoding: jmp near ptr L_10101466
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_101013AF:
        cmp al, 3
        ; Exact immediate encoding: jne near ptr L_10101466
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        cmp word ptr [esp + 15ah], ax
        mov dword ptr [esp + 10h], eax
        ; Exact immediate encoding: jbe near ptr L_10101466
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 1ch], eax
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [esp + 24h], eax
L_101013D7:
        mov eax, dword ptr [edi + 4]
        lea ecx, [esp + 14h]
        push 0
        push ecx
        lea edx, [esp + 28h]
        push 4
        push edx
        push eax
        ; Exact immediate encoding: call dword ptr [101750b8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact immediate encoding: je near ptr L_10101598
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 190h]
        lea ecx, [esp + 14h]
        push 0
        push ecx
        mov eax, dword ptr [esi + edx + 10h]
        mov edx, dword ptr [esp + 24h]
        mov ecx, dword ptr [edi + 4]
        add eax, edx
        push 24h
        push eax
        push ecx
        ; Exact immediate encoding: call dword ptr [101750b8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact immediate encoding: je near ptr L_101015BB
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 18ch]
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 24h]
        mov edx, dword ptr [edx + eax*4]
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [esp + 1ch]
        add ecx, 4
        inc eax
        mov dword ptr [esp + 24h], ecx
        mov ecx, dword ptr [esp + 15ah]
        and ecx, 0ffffh
        add edx, 24h
        cmp eax, ecx
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 1ch], edx
        ; Exact immediate encoding: jl near ptr L_101013D7
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10101466:
        mov edx, dword ptr [edi + 190h]
        xor eax, eax
        mov dword ptr [esi + edx + 4], eax
        mov edx, dword ptr [edi + 190h]
        ; Exact immediate encoding: movsx ecx, word ptr [esp + 158h]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + edx + 8], ecx
        mov ecx, dword ptr [edi + 190h]
        mov dx, word ptr [esp + 15ah]
        mov word ptr [esi + ecx + 0ch], dx
        mov ecx, dword ptr [edi + 190h]
        mov edx, dword ptr [esp + 2ch]
        mov dword ptr [esi + ecx + 14h], edx
        mov ecx, dword ptr [edi + 190h]
        lea edx, [esi + ecx + 20h]
        mov ecx, dword ptr [esp + 148h]
        add esi, 40h
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 14ch]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 150h]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esp + 154h]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [edi + 190h]
        mov ecx, dword ptr [esp + 15ch]
        mov dword ptr [esi + edx - 10h], ecx
        mov edx, dword ptr [edi + 190h]
        mov ecx, dword ptr [esp + 160h]
        mov dword ptr [esi + edx - 0ch], ecx
        mov edx, dword ptr [edi + 190h]
        mov ecx, dword ptr [esp + 164h]
        mov dword ptr [esi + edx - 28h], ecx
        mov ecx, dword ptr [esp + 168h]
        mov dword ptr [esi + edx - 24h], ecx
        mov edx, dword ptr [edi + 190h]
        mov dword ptr [esi + edx - 8], eax
        mov ecx, dword ptr [edi + 190h]
        mov dword ptr [esi + ecx - 4], eax
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [edi + 160h]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 18h], eax
        ; Exact immediate encoding: jl near ptr L_101011BD
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x7b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
L_10101542:
        push ebp
        call FUN_1016cd44
        push ebx
        call FUN_1016cd44
        mov eax, dword ptr [edi + 170h]
        add esp, 8
        test eax, eax
        ; Exact immediate encoding: jne near ptr L_101026DD
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7e
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 4]
        push edx
        ; Exact immediate encoding: call dword ptr [101750c0h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: mov dword ptr [edi + 4], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact immediate encoding: jmp near ptr L_101026DD
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
L_10101575:
        mov eax, dword ptr [esp + 2a8h]
        lea ecx, [esp + 198h]
        push eax
        push 101acb6ch
        push ecx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact immediate encoding: jmp near ptr L_101026A5
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
L_10101598:
        mov edx, dword ptr [esp + 2a8h]
        lea eax, [esp + 198h]
        push edx
        push 101acb40h
        push eax
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact immediate encoding: jmp near ptr L_101026A5
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
L_101015BB:
        mov ecx, dword ptr [esp + 2a8h]
        push ecx
        push 101acb6ch
L_101015C8:
        lea edx, [esp + 1a0h]
        push edx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact immediate encoding: jmp near ptr L_101026A5
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
L_101015DE:
        mov eax, dword ptr [esp + 2a8h]
        lea ecx, [esp + 198h]
        push eax
        push 101acb04h
        push ecx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact immediate encoding: jmp near ptr L_101026A5
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
L_10101601:
        mov eax, dword ptr [edi + 160h]
        mov dword ptr [esp + 18h], ecx
        cmp eax, ecx
        ; Exact immediate encoding: jle near ptr L_10101542
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor esi, esi
L_10101615:
        mov ecx, dword ptr [edi + 4]
        lea edx, [esp + 14h]
        push 0
        push edx
        lea eax, [esp + 0c0h]
        push 3ch
        push eax
        push ecx
        ; Exact immediate encoding: call dword ptr [101750b8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact immediate encoding: je near ptr L_101019B3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 4]
        lea edx, [esp + 14h]
        push 0
        push edx
        lea eax, [esp + 38h]
        push 4
        push eax
        push ecx
        ; Exact immediate encoding: call dword ptr [101750b8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, 1
        ; Exact immediate encoding: jne near ptr L_10101A2E
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 0eeh]
        and edx, 0ffffh
        shl edx, 2
        push edx
        call AllocateObjectThunk
        mov dword ptr [esp + 28h], eax
        mov eax, dword ptr [esp + 0f2h]
        and eax, 0ffffh
        lea eax, [eax + eax*8]
        shl eax, 2
        push eax
        call AllocateObjectThunk
        mov ecx, dword ptr [edi + 190h]
        add esp, 8
        mov dword ptr [esi + ecx + 10h], eax
        mov al, byte ptr [edi + 15dh]
        test al, al
        ; Exact immediate encoding: jne near ptr L_101017BC
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp word ptr [esp + 0eeh], 0
        ; Exact immediate encoding: mov dword ptr [esp + 10h], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jbe near ptr L_101018DF
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 24h]
        ; Exact immediate encoding: mov dword ptr [esp + 1ch], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 20h], edx
L_101016CD:
        mov edx, dword ptr [edi + 4]
        lea eax, [esp + 14h]
        push 0
        push eax
        lea ecx, [esp + 34h]
        push 4
        push ecx
        push edx
        ; Exact immediate encoding: call dword ptr [101750b8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact immediate encoding: je near ptr L_101019D6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 190h]
        xor ecx, ecx
        mov edx, dword ptr [esi + eax + 10h]
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [edx + eax], ecx
        mov edx, dword ptr [edi + 190h]
        add eax, 24h
        mov edx, dword ptr [esi + edx + 10h]
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [edx + eax - 20h], ecx
        mov edx, dword ptr [edi + 190h]
        mov edx, dword ptr [esi + edx + 10h]
        ; Exact immediate encoding: mov dword ptr [edx + eax - 1ch], 100h
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 190h]
        mov edx, dword ptr [esi + edx + 10h]
        mov dword ptr [edx + eax - 18h], ecx
        mov edx, dword ptr [edi + 190h]
        mov edx, dword ptr [esi + edx + 10h]
        ; Exact immediate encoding: mov dword ptr [edx + eax - 14h], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [edi + 190h]
        mov edx, dword ptr [esi + edx + 10h]
        mov dword ptr [edx + eax - 10h], ecx
        mov edx, dword ptr [edi + 190h]
        mov edx, dword ptr [esi + edx + 10h]
        mov dword ptr [edx + eax - 0ch], ecx
        mov edx, dword ptr [edi + 190h]
        mov edx, dword ptr [esi + edx + 10h]
        mov dword ptr [edx + eax - 8], ecx
        mov edx, dword ptr [edi + 190h]
        mov edx, dword ptr [esi + edx + 10h]
        mov dword ptr [edx + eax - 4], ecx
        mov ecx, dword ptr [edi + 18ch]
        mov edx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [ecx + edx*4]
        mov edx, dword ptr [esp + 20h]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 10h]
        add edx, 4
        inc ecx
        mov dword ptr [esp + 20h], edx
        mov edx, dword ptr [esp + 0eeh]
        and edx, 0ffffh
        mov dword ptr [esp + 10h], ecx
        cmp ecx, edx
        ; Exact immediate encoding: jl near ptr L_101016CD
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact immediate encoding: jmp near ptr L_101018DF
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_101017BC:
        cmp al, 1
        ; Exact immediate encoding: jne near ptr L_101018DF
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        cmp word ptr [esp + 0eeh], ax
        mov dword ptr [esp + 10h], eax
        ; Exact immediate encoding: jbe near ptr L_101018DF
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 1ch], eax
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [esp + 20h], eax
L_101017E4:
        mov eax, dword ptr [edi + 4]
        lea ecx, [esp + 14h]
        push 0
        push ecx
        lea edx, [esp + 34h]
        push 4
        push edx
        push eax
        ; Exact immediate encoding: call dword ptr [101750b8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact immediate encoding: je near ptr L_101019E8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 190h]
        lea ecx, [esp + 14h]
        push 0
        push ecx
        mov eax, dword ptr [esi + edx + 10h]
        mov edx, dword ptr [esp + 24h]
        mov ecx, dword ptr [edi + 4]
        add eax, edx
        push 8
        push eax
        push ecx
        ; Exact immediate encoding: call dword ptr [101750b8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact immediate encoding: je near ptr L_10101A0B
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 190h]
        mov eax, dword ptr [esp + 1ch]
        add eax, 24h
        mov ecx, dword ptr [esi + edx + 10h]
        mov dword ptr [esp + 1ch], eax
        ; Exact immediate encoding: mov dword ptr [ecx + eax - 1ch], 100h
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 190h]
        xor ecx, ecx
        mov edx, dword ptr [esi + edx + 10h]
        mov dword ptr [edx + eax - 18h], ecx
        mov edx, dword ptr [edi + 190h]
        mov edx, dword ptr [esi + edx + 10h]
        ; Exact immediate encoding: mov dword ptr [edx + eax - 14h], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [edi + 190h]
        mov edx, dword ptr [esi + edx + 10h]
        mov dword ptr [edx + eax - 10h], ecx
        mov edx, dword ptr [edi + 190h]
        mov edx, dword ptr [esi + edx + 10h]
        mov dword ptr [edx + eax - 0ch], ecx
        mov edx, dword ptr [edi + 190h]
        mov edx, dword ptr [esi + edx + 10h]
        mov dword ptr [edx + eax - 8], ecx
        mov edx, dword ptr [edi + 190h]
        mov edx, dword ptr [esi + edx + 10h]
        mov dword ptr [edx + eax - 4], ecx
        mov ecx, dword ptr [edi + 18ch]
        mov edx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [ecx + edx*4]
        mov edx, dword ptr [esp + 20h]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 10h]
        add edx, 4
        inc ecx
        mov dword ptr [esp + 20h], edx
        mov edx, dword ptr [esp + 0eeh]
        and edx, 0ffffh
        mov dword ptr [esp + 10h], ecx
        cmp ecx, edx
        ; Exact immediate encoding: jl near ptr L_101017E4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_101018DF:
        mov ecx, dword ptr [edi + 190h]
        xor eax, eax
        mov dword ptr [esi + ecx + 4], eax
        mov ecx, dword ptr [edi + 190h]
        ; Exact immediate encoding: movsx edx, word ptr [esp + 0ech]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + ecx + 8], edx
        mov edx, dword ptr [edi + 190h]
        mov cx, word ptr [esp + 0eeh]
        mov word ptr [esi + edx + 0ch], cx
        mov edx, dword ptr [edi + 190h]
        mov ecx, dword ptr [esp + 24h]
        mov dword ptr [esi + edx + 14h], ecx
        mov edx, dword ptr [edi + 190h]
        mov dword ptr [esi + edx + 18h], eax
        mov ecx, dword ptr [edi + 190h]
        mov dword ptr [esi + ecx + 1ch], eax
        mov edx, dword ptr [edi + 190h]
        mov dword ptr [esi + edx + 20h], eax
        mov ecx, dword ptr [edi + 190h]
        mov dword ptr [esi + ecx + 24h], eax
        mov edx, dword ptr [edi + 190h]
        mov ecx, dword ptr [esp + 0e4h]
        mov dword ptr [esi + edx + 28h], ecx
        mov edx, dword ptr [edi + 190h]
        mov ecx, dword ptr [esp + 0e8h]
        mov dword ptr [esi + edx + 2ch], ecx
        mov edx, dword ptr [edi + 190h]
        ; Exact immediate encoding: mov dword ptr [esi + edx + 30h], 100h
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 190h]
        mov dword ptr [esi + ecx + 34h], eax
        mov edx, dword ptr [edi + 190h]
        mov dword ptr [esi + edx + 38h], eax
        mov ecx, dword ptr [edi + 190h]
        mov dword ptr [esi + ecx + 3ch], eax
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [edi + 160h]
        inc eax
        add esi, 40h
        cmp eax, ecx
        mov dword ptr [esp + 18h], eax
        ; Exact immediate encoding: jl near ptr L_10101615
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact immediate encoding: jmp near ptr L_10101542
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
L_101019B3:
        mov edx, dword ptr [esp + 2a8h]
        lea eax, [esp + 198h]
        push edx
        push 101acad4h
        push eax
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact immediate encoding: jmp near ptr L_101026A5
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
L_101019D6:
        mov ecx, dword ptr [esp + 2a8h]
        push ecx
        push 101acb40h
        ; Exact immediate encoding: jmp near ptr L_101015C8
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
L_101019E8:
        mov eax, dword ptr [esp + 2a8h]
        lea ecx, [esp + 198h]
        push eax
        push 101acb40h
        push ecx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact immediate encoding: jmp near ptr L_101026A5
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
L_10101A0B:
        mov edx, dword ptr [esp + 2a8h]
        lea eax, [esp + 198h]
        push edx
        push 101acb40h
        push eax
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact immediate encoding: jmp near ptr L_101026A5
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
L_10101A2E:
        mov ecx, dword ptr [esp + 2a8h]
        push ecx
        push 101acb04h
        ; Exact immediate encoding: jmp near ptr L_101015C8
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
L_10101A40:
        ; Exact immediate encoding: mov dword ptr [edi + 190h], 0
        __asm _emit 0xc7
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_10101542
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
L_10101A4F:
        mov eax, dword ptr [esp + 2a8h]
        lea ecx, [esp + 198h]
        push eax
        push 101acd48h
        push ecx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact immediate encoding: jmp near ptr L_101026A5
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
L_10101A72:
        cmp eax, 1
        ; Exact immediate encoding: jne near ptr L_101026DD
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov eax, dword ptr [101c92d8h]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact immediate encoding: je near ptr L_101026DD
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 101acad0h
        push esi
        push eax
        ; Exact immediate encoding: call dword ptr [10175090h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact immediate encoding: je near ptr L_101026DD
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact immediate encoding: mov eax, dword ptr [101c92d8h]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact immediate encoding: call dword ptr [10175094h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        ; Exact immediate encoding: call dword ptr [101750d8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ebp, eax
        test ebp, ebp
        ; Exact immediate encoding: je near ptr L_101026DD
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        push 1e8480h
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 20h], eax
        call FUN_1016cd4a
        mov ecx, dword ptr [esp + 14h]
        mov esi, ebp
        add esp, 4
        add ebp, 84h
        lea edx, [ecx + 108h]
        ; Exact immediate encoding: mov ecx, 21h
        __asm _emit 0xb9
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, edx
        mov ebx, eax
        ; Exact immediate encoding: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        xor esi, esi
L_10101AF1:
        mov al, byte ptr [esi + edx]
        mov cl, byte ptr [esi + 1017f3ech]
        cmp al, cl
        ; Exact immediate encoding: jne short L_10101B2B
        __asm _emit 0x75
        __asm _emit 0x2d
        inc esi
        cmp esi, 28h
        ; Exact immediate encoding: jl short L_10101AF1
        __asm _emit 0x7c
        __asm _emit 0xed
        mov edi, dword ptr [esp + 10h]
        cmp byte ptr [edi + 15ch], 1
        ; Exact immediate encoding: je short L_10101B45
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [esp + 2a8h]
        lea ecx, [esp + 198h]
        push eax
        push 101acab0h
        push ecx
        ; Exact immediate encoding: jmp near ptr L_1010268F
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
L_10101B2B:
        mov ecx, dword ptr [esp + 2a8h]
        lea edx, [esp + 198h]
        push ecx
        push 101aca88h
        push edx
        ; Exact immediate encoding: jmp near ptr L_1010268F
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
L_10101B45:
        mov ecx, dword ptr [esp + 24h]
        xor eax, eax
L_10101B4B:
        ; Exact immediate encoding: movsx esi, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x34
        __asm _emit 0x10
        add ecx, esi
        inc eax
        cmp eax, 84h
        ; Exact immediate encoding: jb short L_10101B4B
        __asm _emit 0x72
        __asm _emit 0xf2
        cmp ecx, dword ptr [ebp]
        ; Exact immediate encoding: je short L_10101B70
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [esp + 2a8h]
        push edx
        push 101aca64h
        ; Exact immediate encoding: jmp near ptr L_10102687
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
L_10101B70:
        mov ecx, dword ptr [edi + 164h]
        add ebp, 4
        shl ecx, 2
        push ecx
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [edi + 18ch], eax
        test eax, eax
        ; Exact immediate encoding: jne short L_10101BA1
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [esp + 2a8h]
        push edx
        push 101accf8h
        ; Exact immediate encoding: jmp near ptr L_10102687
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
L_10101BA1:
        mov eax, dword ptr [edi + 164h]
        xor esi, esi
        test eax, eax
        mov dword ptr [esp + 14h], esi
        ; Exact immediate encoding: jle near ptr L_101023E4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
L_10101BB5:
        mov dword ptr [esp + 20h], ebp
        add ebp, 48h
        xor ecx, ecx
        xor eax, eax
L_10101BC0:
        mov edx, dword ptr [esp + 20h]
        ; Exact immediate encoding: movsx edx, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x10
        add ecx, edx
        inc eax
        cmp eax, 48h
        ; Exact immediate encoding: jb short L_10101BC0
        __asm _emit 0x72
        __asm _emit 0xf0
        cmp ecx, dword ptr [ebp]
        ; Exact immediate encoding: jne near ptr L_10102438
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov eax, dword ptr [101acda8h]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add ebp, 4
        test eax, 800000h
        ; Exact immediate encoding: je near ptr L_10101EF1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov eax, dword ptr [101acdb4h]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp eax, 2
        ; Exact immediate encoding: jne near ptr L_10101D6A
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov eax, dword ptr [101c9310h]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test ah, 80h
        ; Exact immediate encoding: je near ptr L_10101CB9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 20h]
        xor eax, eax
        mov al, byte ptr [ecx + 2ch]
        sub eax, 0
        ; Exact immediate encoding: je short L_10101C86
        __asm _emit 0x74
        __asm _emit 0x70
        dec eax
        ; Exact immediate encoding: je short L_10101C53
        __asm _emit 0x74
        __asm _emit 0x3a
        dec eax
        ; Exact immediate encoding: jne near ptr L_10101EF1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 12h
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10101E68
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_1015a830
        ; Exact immediate encoding: jmp near ptr L_10101E6A
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_10101C53:
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 11h
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10101EA6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_1014dec0
        ; Exact immediate encoding: jmp near ptr L_10101EA8
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_10101C86:
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 10h
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10101E68
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_10148170
        ; Exact immediate encoding: jmp near ptr L_10101E6A
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10101CB9:
        mov ecx, dword ptr [esp + 20h]
        xor eax, eax
        mov al, byte ptr [ecx + 2ch]
        sub eax, 0
        ; Exact immediate encoding: je short L_10101D37
        __asm _emit 0x74
        __asm _emit 0x70
        dec eax
        ; Exact immediate encoding: je short L_10101D04
        __asm _emit 0x74
        __asm _emit 0x3a
        dec eax
        ; Exact immediate encoding: jne near ptr L_10101EF1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 15h
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10101E68
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_1013b830
        ; Exact immediate encoding: jmp near ptr L_10101E6A
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10101D04:
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 14h
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10101EA6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_1012f0c0
        ; Exact immediate encoding: jmp near ptr L_10101EA8
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10101D37:
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 13h
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10101E68
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_10129480
        ; Exact immediate encoding: jmp near ptr L_10101E6A
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10101D6A:
        cmp eax, 3
        ; Exact immediate encoding: jne near ptr L_10101E1D
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 20h]
        xor eax, eax
        mov al, byte ptr [ecx + 2ch]
        sub eax, 0
        ; Exact immediate encoding: je short L_10101DF1
        __asm _emit 0x74
        __asm _emit 0x70
        dec eax
        ; Exact immediate encoding: je short L_10101DBE
        __asm _emit 0x74
        __asm _emit 0x3a
        dec eax
        ; Exact immediate encoding: jne near ptr L_10101EF1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 18h
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10101E68
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_101221b0
        ; Exact immediate encoding: jmp near ptr L_10101E6A
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10101DBE:
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 17h
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_10101EA6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_1011b0e0
        ; Exact immediate encoding: jmp near ptr L_10101EA8
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10101DF1:
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 16h
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je short L_10101E68
        __asm _emit 0x74
        __asm _emit 0x5a
        push 0
        push 0
        push 0
        mov ecx, eax
        call FUN_101182f0
        ; Exact immediate encoding: jmp short L_10101E6A
        __asm _emit 0xeb
        __asm _emit 0x4d
L_10101E1D:
        cmp eax, 4
        ; Exact immediate encoding: jne near ptr L_10101EE4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 20h]
        xor eax, eax
        mov al, byte ptr [ecx + 2ch]
        sub eax, 0
        ; Exact immediate encoding: je near ptr L_10101EBE
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact immediate encoding: je short L_10101E80
        __asm _emit 0x74
        __asm _emit 0x45
        dec eax
        ; Exact immediate encoding: jne near ptr L_10101EF1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 1bh
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je short L_10101E68
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        call FUN_101121a0
        ; Exact immediate encoding: jmp short L_10101E6A
        __asm _emit 0xeb
        __asm _emit 0x02
L_10101E68:
        xor eax, eax
L_10101E6A:
        mov edx, dword ptr [edi + 18ch]
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edx + esi*4], eax
        ; Exact immediate encoding: jmp short L_10101EF1
        __asm _emit 0xeb
        __asm _emit 0x71
L_10101E80:
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 1ah
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je short L_10101EA6
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        call FUN_1010c290
        ; Exact immediate encoding: jmp short L_10101EA8
        __asm _emit 0xeb
        __asm _emit 0x02
L_10101EA6:
        xor eax, eax
L_10101EA8:
        mov ecx, dword ptr [edi + 18ch]
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ecx + esi*4], eax
        ; Exact immediate encoding: jmp short L_10101EF1
        __asm _emit 0xeb
        __asm _emit 0x33
L_10101EBE:
        push 38h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 19h
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je short L_10101E68
        __asm _emit 0x74
        __asm _emit 0x8d
        mov ecx, eax
        call FUN_10109ca0
        ; Exact immediate encoding: jmp short L_10101E6A
        __asm _emit 0xeb
        __asm _emit 0x86
L_10101EE4:
        mov eax, dword ptr [edi + 18ch]
        ; Exact immediate encoding: mov dword ptr [eax + esi*4], 0
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10101EF1:
        mov ecx, dword ptr [edi + 18ch]
        mov edx, dword ptr [ecx + esi*4]
        mov ecx, dword ptr [esp + 20h]
        mov eax, dword ptr [ecx + 34h]
        mov dword ptr [edx + 4], eax
        mov edx, dword ptr [edi + 18ch]
        mov eax, dword ptr [edx + esi*4]
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [eax + 8], edx
        ; Exact immediate encoding: mov eax, dword ptr [101acdb4h]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp eax, 2
        ; Exact immediate encoding: jne near ptr L_10102249
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx + 2ch]
        cmp al, 2
        ; Exact immediate encoding: jne near ptr L_10102065
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov ecx, dword ptr [101c9310h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        xor esi, esi
        test ch, 80h
        ; Exact immediate encoding: je near ptr L_10101FD4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10101F3F:
        mov cx, word ptr [eax + ebp]
        test cx, cx
        ; Exact immediate encoding: jl short L_10101FB7
        __asm _emit 0x7c
        __asm _emit 0x6f
L_10101F48:
        add ecx, ecx
        add eax, 2
        mov word ptr [ebx + esi], cx
        add esi, 2
        mov dl, byte ptr [eax + ebp]
        inc eax
        mov byte ptr [ebx + esi], dl
        inc esi
        mov cx, word ptr [eax + ebp]
        add eax, 2
        add esi, 2
        lea edx, [ecx + ecx]
        mov word ptr [ebx + esi - 2], dx
        test cx, cx
        ; Exact immediate encoding: je short L_10101FAE
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact immediate encoding: movsx edi, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xf9
L_10101F76:
        ; Exact immediate encoding: movsx cx, byte ptr [eax + ebp + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x28
        __asm _emit 0x02
        mov dl, byte ptr [eax + ebp + 1]
        and ecx, 0fff8h
        shl ecx, 5
        and edx, 0fch
        add eax, 3
        or ecx, edx
        mov dl, byte ptr [eax + ebp - 3]
        shr dl, 3
        shl ecx, 3
        and edx, 1fh
        add esi, 2
        or ecx, edx
        dec edi
        mov word ptr [ebx + esi - 2], cx
        ; Exact immediate encoding: jne short L_10101F76
        __asm _emit 0x75
        __asm _emit 0xc8
L_10101FAE:
        mov cx, word ptr [eax + ebp]
        test cx, cx
        ; Exact immediate encoding: jge short L_10101F48
        __asm _emit 0x7d
        __asm _emit 0x91
L_10101FB7:
        mov cx, word ptr [eax + ebp]
        cmp cx, -2
        ; Exact immediate encoding: je near ptr L_101022C7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov word ptr [ebx + esi], cx
        add eax, 2
        add esi, 2
        ; Exact immediate encoding: jmp near ptr L_10101F3F
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10101FD4:
        mov cx, word ptr [eax + ebp]
        test cx, cx
        ; Exact immediate encoding: jl short L_10102048
        __asm _emit 0x7c
        __asm _emit 0x6b
L_10101FDD:
        add ecx, ecx
        add eax, 2
        mov word ptr [ebx + esi], cx
        add esi, 2
        mov dl, byte ptr [eax + ebp]
        inc eax
        mov byte ptr [ebx + esi], dl
        inc esi
        mov cx, word ptr [eax + ebp]
        add eax, 2
        add esi, 2
        lea edx, [ecx + ecx]
        mov word ptr [ebx + esi - 2], dx
        test cx, cx
        ; Exact immediate encoding: je short L_1010203F
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact immediate encoding: movsx edi, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xf9
L_1010200B:
        mov cl, byte ptr [eax + ebp + 2]
        mov dl, byte ptr [eax + ebp + 1]
        and ecx, 0f8h
        and edx, 0f8h
        shl ecx, 5
        or ecx, edx
        mov dl, byte ptr [eax + ebp]
        shr dl, 3
        shl ecx, 2
        and edx, 1fh
        add eax, 3
        or ecx, edx
        mov word ptr [ebx + esi], cx
        add esi, 2
        dec edi
        ; Exact immediate encoding: jne short L_1010200B
        __asm _emit 0x75
        __asm _emit 0xcc
L_1010203F:
        mov cx, word ptr [eax + ebp]
        test cx, cx
        ; Exact immediate encoding: jge short L_10101FDD
        __asm _emit 0x7d
        __asm _emit 0x95
L_10102048:
        mov cx, word ptr [eax + ebp]
        cmp cx, -2
        ; Exact immediate encoding: je near ptr L_101022C7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov word ptr [ebx + esi], cx
        add eax, 2
        add esi, 2
        ; Exact immediate encoding: jmp near ptr L_10101FD4
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10102065:
        cmp al, 1
        ; Exact immediate encoding: jne near ptr L_101021A4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov ecx, dword ptr [101c9310h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        xor esi, esi
        test ch, 80h
        ; Exact immediate encoding: je near ptr L_10102114
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10102080:
        mov cx, word ptr [eax + ebp]
        test cx, cx
        ; Exact immediate encoding: jl short L_101020F8
        __asm _emit 0x7c
        __asm _emit 0x6f
L_10102089:
        add ecx, ecx
        add eax, 2
        mov word ptr [ebx + esi], cx
        add esi, 2
        mov dl, byte ptr [eax + ebp]
        inc eax
        mov byte ptr [ebx + esi], dl
        inc esi
        mov cx, word ptr [eax + ebp]
        add eax, 2
        add esi, 2
        lea edx, [ecx + ecx]
        mov word ptr [ebx + esi - 2], dx
        test cx, cx
        ; Exact immediate encoding: je short L_101020EF
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact immediate encoding: movsx edi, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xf9
L_101020B7:
        ; Exact immediate encoding: movsx cx, byte ptr [eax + ebp + 2]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x28
        __asm _emit 0x02
        mov dl, byte ptr [eax + ebp + 1]
        and ecx, 0fff8h
        shl ecx, 5
        and edx, 0fch
        add eax, 3
        or ecx, edx
        mov dl, byte ptr [eax + ebp - 3]
        shr dl, 3
        shl ecx, 3
        and edx, 1fh
        add esi, 2
        or ecx, edx
        dec edi
        mov word ptr [ebx + esi - 2], cx
        ; Exact immediate encoding: jne short L_101020B7
        __asm _emit 0x75
        __asm _emit 0xc8
L_101020EF:
        mov cx, word ptr [eax + ebp]
        test cx, cx
        ; Exact immediate encoding: jge short L_10102089
        __asm _emit 0x7d
        __asm _emit 0x91
L_101020F8:
        cmp word ptr [eax + ebp], -2
        ; Exact immediate encoding: je near ptr L_1010236F
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov word ptr [ebx + esi], 0ffffh
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 2
        add esi, 2
        ; Exact immediate encoding: jmp near ptr L_10102080
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_10102114:
        mov cx, word ptr [eax + ebp]
        test cx, cx
        ; Exact immediate encoding: jl short L_10102188
        __asm _emit 0x7c
        __asm _emit 0x6b
L_1010211D:
        add ecx, ecx
        add eax, 2
        mov word ptr [ebx + esi], cx
        add esi, 2
        mov dl, byte ptr [eax + ebp]
        inc eax
        mov byte ptr [ebx + esi], dl
        inc esi
        mov cx, word ptr [eax + ebp]
        add eax, 2
        add esi, 2
        lea edx, [ecx + ecx]
        mov word ptr [ebx + esi - 2], dx
        test cx, cx
        ; Exact immediate encoding: je short L_1010217F
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact immediate encoding: movsx edi, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xf9
L_1010214B:
        mov cl, byte ptr [eax + ebp + 2]
        mov dl, byte ptr [eax + ebp + 1]
        and ecx, 0f8h
        and edx, 0f8h
        shl ecx, 5
        or ecx, edx
        mov dl, byte ptr [eax + ebp]
        shr dl, 3
        shl ecx, 2
        and edx, 1fh
        add eax, 3
        or ecx, edx
        mov word ptr [ebx + esi], cx
        add esi, 2
        dec edi
        ; Exact immediate encoding: jne short L_1010214B
        __asm _emit 0x75
        __asm _emit 0xcc
L_1010217F:
        mov cx, word ptr [eax + ebp]
        test cx, cx
        ; Exact immediate encoding: jge short L_1010211D
        __asm _emit 0x7d
        __asm _emit 0x95
L_10102188:
        cmp word ptr [eax + ebp], -2
        ; Exact immediate encoding: je near ptr L_1010236F
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov word ptr [ebx + esi], 0ffffh
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 2
        add esi, 2
        ; Exact immediate encoding: jmp near ptr L_10102114
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
L_101021A4:
        test al, al
        ; Exact immediate encoding: jne near ptr L_101023BB
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 20h]
        xor esi, esi
        mov ecx, dword ptr [eax + 34h]
        imul ecx, dword ptr [eax + 38h]
        ; Exact immediate encoding: mov eax, dword ptr [101c9310h]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test ah, 80h
        ; Exact immediate encoding: je short L_10102209
        __asm _emit 0x74
        __asm _emit 0x46
        test ecx, ecx
        ; Exact immediate encoding: je near ptr L_1010236F
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 1]
        mov edi, ecx
L_101021D0:
        ; Exact immediate encoding: movsx cx, byte ptr [eax + 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x01
        mov dl, byte ptr [eax]
        and ecx, 0fff8h
        shl ecx, 5
        and edx, 0fch
        add eax, 3
        or ecx, edx
        mov dl, byte ptr [eax - 4]
        shr dl, 3
        shl ecx, 3
        and edx, 1fh
        add esi, 2
        or ecx, edx
        dec edi
        mov word ptr [ebx + esi - 2], cx
        ; Exact immediate encoding: jne short L_101021D0
        __asm _emit 0x75
        __asm _emit 0xcc
        ; Exact immediate encoding: jmp near ptr L_1010236F
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10102209:
        test ecx, ecx
        ; Exact immediate encoding: je near ptr L_1010236F
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [ebp + 1]
L_10102214:
        mov al, byte ptr [edi + 1]
        mov dl, byte ptr [edi]
        and eax, 0f8h
        and edx, 0f8h
        shl eax, 5
        or eax, edx
        mov dl, byte ptr [edi - 1]
        shr dl, 3
        shl eax, 2
        and edx, 1fh
        add edi, 3
        or eax, edx
        mov word ptr [ebx + esi], ax
        add esi, 2
        dec ecx
        ; Exact immediate encoding: jne short L_10102214
        __asm _emit 0x75
        __asm _emit 0xd0
        ; Exact immediate encoding: jmp near ptr L_1010236F
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_10102249:
        cmp eax, 3
        ; Exact immediate encoding: jl near ptr L_101023BB
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx + 2ch]
        cmp al, 2
        ; Exact immediate encoding: jne short L_101022D4
        __asm _emit 0x75
        __asm _emit 0x7b
        xor eax, eax
        xor esi, esi
L_1010225D:
        mov cx, word ptr [eax + ebp]
        test cx, cx
        ; Exact immediate encoding: jl short L_101022B1
        __asm _emit 0x7c
        __asm _emit 0x4b
L_10102266:
        add ecx, ecx
        add eax, 2
        mov word ptr [ebx + esi], cx
        add esi, 2
        mov dl, byte ptr [eax + ebp]
        inc eax
        mov byte ptr [ebx + esi], dl
        inc esi
        mov cx, word ptr [eax + ebp]
        add eax, 2
        add esi, 2
        lea edx, [ecx + ecx]
        mov word ptr [ebx + esi - 2], dx
        test cx, cx
        ; Exact immediate encoding: je short L_101022A8
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact immediate encoding: movsx ecx, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc9
L_10102294:
        mov edx, dword ptr [eax + ebp]
        add eax, 3
        mov dword ptr [ebx + esi], edx
        ; Exact immediate encoding: mov edi, dword ptr [101acdb4h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add esi, edi
        dec ecx
        ; Exact immediate encoding: jne short L_10102294
        __asm _emit 0x75
        __asm _emit 0xec
L_101022A8:
        mov cx, word ptr [eax + ebp]
        test cx, cx
        ; Exact immediate encoding: jge short L_10102266
        __asm _emit 0x7d
        __asm _emit 0xb5
L_101022B1:
        mov cx, word ptr [eax + ebp]
        cmp cx, -2
        ; Exact immediate encoding: je short L_101022C7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov word ptr [ebx + esi], cx
        add eax, 2
        add esi, 2
        ; Exact immediate encoding: jmp short L_1010225D
        __asm _emit 0xeb
        __asm _emit 0x96
L_101022C7:
        mov ax, word ptr [eax + ebp]
        mov word ptr [ebx + esi], ax
        ; Exact immediate encoding: jmp near ptr L_10102375
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_101022D4:
        cmp al, 1
        ; Exact immediate encoding: jne short L_10102345
        __asm _emit 0x75
        __asm _emit 0x6d
        xor eax, eax
        xor esi, esi
L_101022DC:
        mov cx, word ptr [eax + ebp]
        test cx, cx
        ; Exact immediate encoding: jl short L_10102330
        __asm _emit 0x7c
        __asm _emit 0x4b
L_101022E5:
        add ecx, ecx
        add eax, 2
        mov word ptr [ebx + esi], cx
        add esi, 2
        mov dl, byte ptr [eax + ebp]
        inc eax
        mov byte ptr [ebx + esi], dl
        inc esi
        mov cx, word ptr [eax + ebp]
        add eax, 2
        add esi, 2
        lea edx, [ecx + ecx]
        mov word ptr [ebx + esi - 2], dx
        test cx, cx
        ; Exact immediate encoding: je short L_10102327
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact immediate encoding: movsx ecx, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc9
L_10102313:
        mov edx, dword ptr [eax + ebp]
        add eax, 3
        mov dword ptr [ebx + esi], edx
        ; Exact immediate encoding: mov edi, dword ptr [101acdb4h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add esi, edi
        dec ecx
        ; Exact immediate encoding: jne short L_10102313
        __asm _emit 0x75
        __asm _emit 0xec
L_10102327:
        mov cx, word ptr [eax + ebp]
        test cx, cx
        ; Exact immediate encoding: jge short L_101022E5
        __asm _emit 0x7d
        __asm _emit 0xb5
L_10102330:
        cmp word ptr [eax + ebp], -2
        ; Exact immediate encoding: je short L_1010236F
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact immediate encoding: mov word ptr [ebx + esi], 0ffffh
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 2
        add esi, 2
        ; Exact immediate encoding: jmp short L_101022DC
        __asm _emit 0xeb
        __asm _emit 0x97
L_10102345:
        test al, al
        ; Exact immediate encoding: jne short L_101023BB
        __asm _emit 0x75
        __asm _emit 0x72
        mov eax, dword ptr [esp + 20h]
        xor esi, esi
        mov ecx, dword ptr [eax + 34h]
        imul ecx, dword ptr [eax + 38h]
        test ecx, ecx
        ; Exact immediate encoding: je short L_1010236F
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, ebp
L_1010235C:
        mov edx, dword ptr [eax]
        add eax, 3
        mov dword ptr [ebx + esi], edx
        ; Exact immediate encoding: mov edi, dword ptr [101acdb4h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        add esi, edi
        dec ecx
        ; Exact immediate encoding: jne short L_1010235C
        __asm _emit 0x75
        __asm _emit 0xed
L_1010236F:
        ; Exact immediate encoding: mov word ptr [ebx + esi], -2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
L_10102375:
        add esi, 2
        push esi
        call FUN_1016cd4a
        mov edi, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 18h]
        add esp, 4
        mov ecx, dword ptr [edi + 18ch]
        mov ecx, dword ptr [ecx + edx*4]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [edi + 18ch]
        mov ecx, esi
        mov esi, ebx
        mov edx, dword ptr [eax + edx*4]
        mov eax, ecx
        shr ecx, 2
        mov edi, dword ptr [edx + 0ch]
        ; Exact immediate encoding: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        and ecx, 3
        ; Exact immediate encoding: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov edi, dword ptr [esp + 10h]
        mov esi, dword ptr [esp + 14h]
L_101023BB:
        mov eax, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 1ch]
        mov ecx, dword ptr [eax + 30h]
        add ebp, ecx
        mov ecx, dword ptr [eax + 44h]
        mov eax, dword ptr [edi + 164h]
        add edx, ecx
        inc esi
        mov dword ptr [esp + 1ch], edx
        cmp esi, eax
        mov dword ptr [esp + 14h], esi
        ; Exact immediate encoding: jl near ptr L_10101BB5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd1
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
L_101023E4:
        mov esi, dword ptr [edi + 160h]
        test esi, esi
        ; Exact immediate encoding: jle near ptr L_10102662
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        shl ecx, 6
        add ecx, 4
        push ecx
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 1ch
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je short L_1010244A
        __asm _emit 0x74
        __asm _emit 0x34
        push 100ff9b0h
        mov dword ptr [eax], esi
        push 101027b0h
        add eax, 4
        push esi
        push 40h
        push eax
        mov dword ptr [esp + 38h], eax
        call FUN_1016caa0
        mov eax, dword ptr [esp + 24h]
        ; Exact immediate encoding: jmp short L_1010244C
        __asm _emit 0xeb
        __asm _emit 0x14
L_10102438:
        mov edx, dword ptr [esp + 2a8h]
        push edx
        push 101aca38h
        ; Exact immediate encoding: jmp near ptr L_10102687
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_1010244A:
        xor eax, eax
L_1010244C:
        test eax, eax
        ; Exact immediate encoding: mov dword ptr [esp + 2a0h], 0ffffffffh
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi + 190h], eax
        ; Exact immediate encoding: jne short L_10102473
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [esp + 2a8h]
        push edx
        push 101acba8h
        ; Exact immediate encoding: jmp near ptr L_10102687
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_10102473:
        mov eax, dword ptr [edi + 160h]
        ; Exact immediate encoding: mov dword ptr [esp + 14h], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact immediate encoding: jle near ptr L_1010266C
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [esp + 18h], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10102491:
        mov esi, ebp
        add ebp, 3ch
        xor ecx, ecx
        xor eax, eax
L_1010249A:
        ; Exact immediate encoding: movsx edx, byte ptr [eax + esi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x30
        add ecx, edx
        inc eax
        cmp eax, 3ch
        ; Exact immediate encoding: jb short L_1010249A
        __asm _emit 0x72
        __asm _emit 0xf4
        cmp ecx, dword ptr [ebp]
        ; Exact immediate encoding: jne near ptr L_1010263C
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        add ebp, 4
        mov ax, word ptr [esi + 36h]
        shl eax, 3
        push eax
        call AllocateObjectThunk
        xor ecx, ecx
        mov dword ptr [esp + 28h], eax
        mov cx, word ptr [esi + 36h]
        shl ecx, 2
        push ecx
        call FUN_1016cd4a
        mov dl, byte ptr [edi + 15dh]
        add esp, 8
        xor ecx, ecx
        mov dword ptr [esp + 28h], eax
        test dl, dl
        ; Exact immediate encoding: jne short L_1010255E
        __asm _emit 0x75
        __asm _emit 0x77
        cmp word ptr [esi + 36h], 0
        ; Exact immediate encoding: mov dword ptr [esp + 20h], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jbe near ptr L_101025C9
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [esp + 24h], eax
        ; Exact immediate encoding: jmp short L_1010250C
        __asm _emit 0xeb
        __asm _emit 0x04
L_10102508:
        mov eax, dword ptr [esp + 24h]
L_1010250C:
        ; Exact immediate encoding: mov dword ptr [eax], 0
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [eax + 4], 0
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edi + 18ch]
        add ebp, 4
        mov edx, dword ptr [eax + edx*4]
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ebp - 4]
        add ecx, edx
        mov edx, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 20h]
        add edx, 8
        mov dword ptr [esp + 24h], edx
        mov edx, dword ptr [esp + 2ch]
        add edx, 4
        inc eax
        mov dword ptr [esp + 2ch], edx
        xor edx, edx
        mov dx, word ptr [esi + 36h]
        mov dword ptr [esp + 20h], eax
        cmp eax, edx
        ; Exact immediate encoding: jl short L_10102508
        __asm _emit 0x7c
        __asm _emit 0xac
        ; Exact immediate encoding: jmp short L_101025C9
        __asm _emit 0xeb
        __asm _emit 0x6b
L_1010255E:
        cmp dl, 1
        ; Exact immediate encoding: jne short L_101025C9
        __asm _emit 0x75
        __asm _emit 0x66
        cmp word ptr [esi + 36h], 0
        ; Exact immediate encoding: mov dword ptr [esp + 2ch], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jbe short L_101025C9
        __asm _emit 0x76
        __asm _emit 0x57
        mov edx, dword ptr [esp + 24h]
        mov dword ptr [esp + 24h], eax
L_1010257A:
        mov eax, dword ptr [ebp]
        mov edi, dword ptr [edi + 18ch]
        add ebp, 4
        add edx, 8
        mov eax, dword ptr [edi + eax*4]
        mov edi, dword ptr [esp + 24h]
        add ebp, 8
        mov dword ptr [edi], eax
        mov eax, dword ptr [ebp - 0ch]
        add ecx, eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx - 4], eax
        add eax, dword ptr [edx - 8]
        add edi, 4
        add ecx, eax
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [esp + 24h], edi
        xor edi, edi
        mov di, word ptr [esi + 36h]
        inc eax
        cmp eax, edi
        mov edi, dword ptr [esp + 10h]
        mov dword ptr [esp + 2ch], eax
        ; Exact immediate encoding: jl short L_1010257A
        __asm _emit 0x7c
        __asm _emit 0xb1
L_101025C9:
        cmp ecx, dword ptr [esi + 38h]
        ; Exact immediate encoding: jne near ptr L_10102653
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 190h]
        mov eax, dword ptr [esp + 18h]
        ; Exact immediate encoding: mov dword ptr [eax + ecx + 4], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 190h]
        ; Exact immediate encoding: movsx edx, word ptr [esi + 34h]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x56
        __asm _emit 0x34
        mov dword ptr [eax + ecx + 8], edx
        mov edx, dword ptr [edi + 190h]
        mov cx, word ptr [esi + 36h]
        mov word ptr [eax + edx + 0ch], cx
        mov edx, dword ptr [edi + 190h]
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [eax + edx + 14h], ecx
        mov edx, dword ptr [esi + 38h]
        mov ecx, dword ptr [esp + 1ch]
        add eax, 40h
        add ecx, edx
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [edi + 160h]
        mov dword ptr [esp + 1ch], ecx
        mov ecx, dword ptr [esp + 14h]
        inc ecx
        cmp ecx, eax
        mov dword ptr [esp + 14h], ecx
        ; Exact immediate encoding: jl near ptr L_10102491
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact immediate encoding: jmp short L_1010266C
        __asm _emit 0xeb
        __asm _emit 0x30
L_1010263C:
        mov eax, dword ptr [esp + 2a8h]
        lea ecx, [esp + 198h]
        push eax
        push 101aca08h
        push ecx
        ; Exact immediate encoding: jmp short L_1010268F
        __asm _emit 0xeb
        __asm _emit 0x3c
L_10102653:
        mov edx, dword ptr [esp + 2a8h]
        push edx
        push 101ac9d8h
        ; Exact immediate encoding: jmp short L_10102687
        __asm _emit 0xeb
        __asm _emit 0x25
L_10102662:
        ; Exact immediate encoding: mov dword ptr [edi + 190h], 0
        __asm _emit 0xc7
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1010266C:
        mov ecx, dword ptr [esp + 1ch]
        mov eax, dword ptr [edi + 168h]
        cmp eax, ecx
        ; Exact immediate encoding: je short L_101026D0
        __asm _emit 0x74
        __asm _emit 0x56
        mov edx, dword ptr [esp + 2a8h]
        push edx
        push 101ac9b0h
L_10102687:
        lea eax, [esp + 1a0h]
        push eax
L_1010268F:
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        push ebx
        call FUN_1016cd44
        mov edi, dword ptr [esp + 14h]
        add esp, 4
L_101026A5:
        xor eax, eax
        mov dword ptr [edi + 18ch], eax
        mov dword ptr [edi + 190h], eax
L_101026B3:
        xor eax, eax
L_101026B5:
        mov ecx, dword ptr [esp + 298h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact immediate encoding: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 294h
        ret 8
L_101026D0:
        push ebx
        call FUN_1016cd44
        mov edi, dword ptr [esp + 14h]
        add esp, 4
L_101026DD:
        mov ecx, dword ptr [esp + 2a8h]
        add edi, 8
        push ecx
        push edi
        ; Exact immediate encoding: call dword ptr [101750b0h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp short L_101026B5
        __asm _emit 0xeb
        __asm _emit 0xbf
    }
}
