// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A0740 .. +0x1CA bytes.
// Source symbol alias: FUN_587a0740.
extern "C" __declspec(naked) void FUN_587a0740() {
    __asm {
        // 0x587A0740: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A0744: fidiv dword ptr [esp + 4]
        __asm _emit 0xDA
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587A0748: fld qword ptr [0x58998530]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A074E: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A0750: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A0752: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A0755: jne 0x587a075e
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587A0757: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A0759: jmp 0x587a08df
        __asm _emit 0xE9
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A075E: fld qword ptr [0x58998528]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A0764: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A0766: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A0768: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A076B: jne 0x587a0777
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587A076D: mov eax, 0x32
        __asm _emit 0xB8
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0772: jmp 0x587a08df
        __asm _emit 0xE9
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0777: fld qword ptr [0x58998520]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A077D: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A077F: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A0781: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A0784: jne 0x587a0790
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587A0786: mov eax, 0x64
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A078B: jmp 0x587a08df
        __asm _emit 0xE9
        __asm _emit 0x4F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0790: fld qword ptr [0x58998518]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A0796: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A0798: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A079A: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A079D: jne 0x587a07a9
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587A079F: mov eax, 0x96
        __asm _emit 0xB8
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A07A4: jmp 0x587a08df
        __asm _emit 0xE9
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A07A9: fld qword ptr [0x58998510]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A07AF: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A07B1: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A07B3: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A07B6: jne 0x587a07c2
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587A07B8: mov eax, 0xc8
        __asm _emit 0xB8
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A07BD: jmp 0x587a08df
        __asm _emit 0xE9
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A07C2: fld qword ptr [0x58998508]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A07C8: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A07CA: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A07CC: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A07CF: jne 0x587a07db
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587A07D1: mov eax, 0xfa
        __asm _emit 0xB8
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A07D6: jmp 0x587a08df
        __asm _emit 0xE9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A07DB: fld qword ptr [0x58998500]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A07E1: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A07E3: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A07E5: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A07E8: jne 0x587a07f4
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587A07EA: mov eax, 0x12c
        __asm _emit 0xB8
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A07EF: jmp 0x587a08df
        __asm _emit 0xE9
        __asm _emit 0xEB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A07F4: fld qword ptr [0x589984f8]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xF8
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A07FA: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A07FC: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A07FE: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A0801: jne 0x587a080d
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587A0803: mov eax, 0x15e
        __asm _emit 0xB8
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0808: jmp 0x587a08df
        __asm _emit 0xE9
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A080D: fld qword ptr [0x589984f0]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xF0
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A0813: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A0815: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A0817: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A081A: jne 0x587a0826
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587A081C: mov eax, 0x190
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0821: jmp 0x587a08df
        __asm _emit 0xE9
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0826: fld qword ptr [0x589984e8]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A082C: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A082E: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A0830: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A0833: jne 0x587a083f
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587A0835: mov eax, 0x1c2
        __asm _emit 0xB8
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A083A: jmp 0x587a08df
        __asm _emit 0xE9
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A083F: fld qword ptr [0x589984e0]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xE0
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A0845: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A0847: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A0849: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A084C: jne 0x587a0858
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587A084E: mov eax, 0x1f4
        __asm _emit 0xB8
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0853: jmp 0x587a08df
        __asm _emit 0xE9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0858: fld qword ptr [0x589984d8]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xD8
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A085E: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A0860: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A0862: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A0865: jne 0x587a086e
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587A0867: mov eax, 0x226
        __asm _emit 0xB8
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A086C: jmp 0x587a08df
        __asm _emit 0xEB
        __asm _emit 0x71
        // 0x587A086E: fld qword ptr [0x589984d0]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xD0
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A0874: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A0876: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A0878: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A087B: jne 0x587a0884
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587A087D: mov eax, 0x258
        __asm _emit 0xB8
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0882: jmp 0x587a08df
        __asm _emit 0xEB
        __asm _emit 0x5B
        // 0x587A0884: fld qword ptr [0x589984c8]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A088A: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A088C: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A088E: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A0891: jne 0x587a089a
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587A0893: mov eax, 0x28a
        __asm _emit 0xB8
        __asm _emit 0x8A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0898: jmp 0x587a08df
        __asm _emit 0xEB
        __asm _emit 0x45
        // 0x587A089A: fld qword ptr [0x589984c0]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A08A0: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A08A2: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A08A4: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A08A7: jne 0x587a08b0
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587A08A9: mov eax, 0x2bc
        __asm _emit 0xB8
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A08AE: jmp 0x587a08df
        __asm _emit 0xEB
        __asm _emit 0x2F
        // 0x587A08B0: fld qword ptr [0x589984b8]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xB8
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A08B6: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A08B8: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A08BA: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A08BD: jne 0x587a08c6
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587A08BF: mov eax, 0x2ee
        __asm _emit 0xB8
        __asm _emit 0xEE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A08C4: jmp 0x587a08df
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x587A08C6: fld qword ptr [0x589984b0]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xB0
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A08CC: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587A08CE: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A08D0: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587A08D3: mov eax, 0x320
        __asm _emit 0xB8
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A08D8: je 0x587a08df
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587A08DA: mov eax, 0x352
        __asm _emit 0xB8
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A08DF: cmp eax, 0x384
        __asm _emit 0x3D
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A08E4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A08E6: jge 0x587a08ff
        __asm _emit 0x7D
        __asm _emit 0x17
        // 0x587A08E8: fcom qword ptr [ecx*8 + 0x589c96d8]
        __asm _emit 0xDC
        __asm _emit 0x14
        __asm _emit 0xCD
        __asm _emit 0xD8
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587A08EF: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587A08F1: test ah, 5
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x05
        // 0x587A08F4: jnp 0x587a0905
        __asm _emit 0x7B
        __asm _emit 0x0F
        // 0x587A08F6: inc ecx
        __asm _emit 0x41
        // 0x587A08F7: cmp ecx, 0x384
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A08FD: jl 0x587a08e8
        __asm _emit 0x7C
        __asm _emit 0xE9
        // 0x587A08FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x587A0902: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x587A0904: ret
        __asm _emit 0xC3
        // 0x587A0905: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587A0907: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x587A0909: ret
        __asm _emit 0xC3
    }
}
