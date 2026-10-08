// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 319 bytes in 1 exact ranges.
// Source symbol alias: FUN_58797470.

// Ghidra body range 0x58797470..0x587975AF; 319 mapped bytes.
extern "C" __declspec(naked) void FUN_58797470_segment_00() {
    __asm {
        // 0x58797470: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58797474: push ebx
        __asm _emit 0x53
        // 0x58797475: push esi
        __asm _emit 0x56
        // 0x58797476: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58797478: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879747D: cmp eax, 0x13
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x13
        // 0x58797480: ja 0x58797552
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797486: jmp dword ptr [eax*4 + 0x587975b0]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xB0
        __asm _emit 0x75
        __asm _emit 0x79
        __asm _emit 0x58
        // 0x5879748D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879748F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797491: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797493: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x58797495: jmp 0x58797546
        __asm _emit 0xE9
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879749A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879749C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879749E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974A0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974A2: jmp 0x58797546
        __asm _emit 0xE9
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587974A7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974A9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974AB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974AD: push 0x1bb
        __asm _emit 0x68
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587974B2: jmp 0x58797546
        __asm _emit 0xE9
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587974B7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974B9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974BB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974BD: push 0x1c
        __asm _emit 0x6A
        __asm _emit 0x1C
        // 0x587974BF: jmp 0x58797546
        __asm _emit 0xE9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587974C4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974C6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974C8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974CA: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x587974CC: jmp 0x58797546
        __asm _emit 0xEB
        __asm _emit 0x78
        // 0x587974CE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974D0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974D2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974D4: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x587974D6: jmp 0x58797546
        __asm _emit 0xEB
        __asm _emit 0x6E
        // 0x587974D8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974DA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974DC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974DE: push 0x2bd
        __asm _emit 0x68
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587974E3: jmp 0x58797546
        __asm _emit 0xEB
        __asm _emit 0x61
        // 0x587974E5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974E7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974E9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974EB: push 0x2be
        __asm _emit 0x68
        __asm _emit 0xBE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587974F0: jmp 0x58797546
        __asm _emit 0xEB
        __asm _emit 0x54
        // 0x587974F2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974F4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974F6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974F8: push 0x11
        __asm _emit 0x6A
        __asm _emit 0x11
        // 0x587974FA: jmp 0x58797546
        __asm _emit 0xEB
        __asm _emit 0x4A
        // 0x587974FC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587974FE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797500: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797502: push 0x490
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797507: jmp 0x58797546
        __asm _emit 0xEB
        __asm _emit 0x3D
        // 0x58797509: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879750B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879750D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879750F: push 0x491
        __asm _emit 0x68
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797514: jmp 0x58797546
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x58797516: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797518: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879751A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879751C: push 0x49f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797521: jmp 0x58797546
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x58797523: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797525: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797527: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797529: push 0x515
        __asm _emit 0x68
        __asm _emit 0x15
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879752E: jmp 0x58797546
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x58797530: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797532: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797534: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797536: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58797538: jmp 0x58797546
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5879753A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5879753C: jmp 0x58797552
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x5879753E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797540: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797542: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797544: push 0x7a
        __asm _emit 0x6A
        __asm _emit 0x7A
        // 0x58797546: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x45
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5879754B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5879754D: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xD7
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58797552: mov dword ptr [0x58a248d8], 0
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0xD8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879755C: mov dword ptr [esi + 0x2c8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797566: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58797568: je 0x58797578
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5879756A: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x45
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5879756F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58797571: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58797573: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58797576: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58797578: mov eax, 0xffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879757D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5879757F: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58797581: mov dword ptr [esi + 0x2b8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797587: mov dword ptr [esi + 0x2b4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879758D: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58797590: mov word ptr [esi + 0x2c6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xC6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797597: mov word ptr [esi + 0x2c4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879759E: mov dword ptr [esi + 0x2c0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587975A4: mov dword ptr [esi + 0x2bc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587975AA: pop esi
        __asm _emit 0x5E
        // 0x587975AB: pop ebx
        __asm _emit 0x5B
        // 0x587975AC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
