// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588310AE .. +0xFB bytes.
extern "C" __declspec(naked) void FUN_588310ae() {
    __asm {
        // 0x588310AE: push ebp
        __asm _emit 0x55
        // 0x588310AF: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588310B1: sub esp, 0x324
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588310B7: push 0x17
        __asm _emit 0x6A
        __asm _emit 0x17
        // 0x588310B9: call dword ptr [0x588943b8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xB8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x588310BF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588310C1: je 0x588310c8
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588310C3: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588310C5: pop ecx
        __asm _emit 0x59
        // 0x588310C6: int 0x29
        __asm _emit 0xCD
        __asm _emit 0x29
        // 0x588310C8: mov dword ptr [0x589664c8], eax
        __asm _emit 0xA3
        __asm _emit 0xC8
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588310CD: mov dword ptr [0x589664c4], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588310D3: mov dword ptr [0x589664c0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xC0
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588310D9: mov dword ptr [0x589664bc], ebx
        __asm _emit 0x89
        __asm _emit 0x1D
        __asm _emit 0xBC
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588310DF: mov dword ptr [0x589664b8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588310E5: mov dword ptr [0x589664b4], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0xB4
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588310EB: mov word ptr [0x589664e0], ss
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0x15
        __asm _emit 0xE0
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588310F2: mov word ptr [0x589664d4], cs
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0x0D
        __asm _emit 0xD4
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588310F9: mov word ptr [0x589664b0], ds
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0x1D
        __asm _emit 0xB0
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58831100: mov word ptr [0x589664ac], es
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0xAC
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58831107: mov word ptr [0x589664a8], fs
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0x25
        __asm _emit 0xA8
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5883110E: mov word ptr [0x589664a4], gs
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0x2D
        __asm _emit 0xA4
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58831115: pushfd
        __asm _emit 0x9C
        // 0x58831116: pop dword ptr [0x589664d8]
        __asm _emit 0x8F
        __asm _emit 0x05
        __asm _emit 0xD8
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5883111C: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5883111F: mov dword ptr [0x589664cc], eax
        __asm _emit 0xA3
        __asm _emit 0xCC
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58831124: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x58831127: mov dword ptr [0x589664d0], eax
        __asm _emit 0xA3
        __asm _emit 0xD0
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5883112C: lea eax, [ebp + 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5883112F: mov dword ptr [0x589664dc], eax
        __asm _emit 0xA3
        __asm _emit 0xDC
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58831134: mov eax, dword ptr [ebp - 0x324]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883113A: mov dword ptr [0x58966418], 0x10001
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58831144: mov eax, dword ptr [0x589664d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58831149: mov dword ptr [0x589663d4], eax
        __asm _emit 0xA3
        __asm _emit 0xD4
        __asm _emit 0x63
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5883114E: mov dword ptr [0x589663c8], 0xc0000409
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0xC8
        __asm _emit 0x63
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0xC0
        // 0x58831158: mov dword ptr [0x589663cc], 1
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0xCC
        __asm _emit 0x63
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831162: mov dword ptr [0x589663d8], 1
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0xD8
        __asm _emit 0x63
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883116C: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5883116E: pop eax
        __asm _emit 0x58
        // 0x5883116F: imul eax, eax, 0
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x00
        // 0x58831172: mov dword ptr [eax + 0x589663dc], 2
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xDC
        __asm _emit 0x63
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883117C: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5883117E: pop eax
        __asm _emit 0x58
        // 0x5883117F: imul eax, eax, 0
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x00
        // 0x58831182: mov ecx, dword ptr [0x58906040]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58831188: mov dword ptr [ebp + eax - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0xF8
        // 0x5883118C: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5883118E: pop eax
        __asm _emit 0x58
        // 0x5883118F: shl eax, 0
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x00
        // 0x58831192: mov ecx, dword ptr [0x58906080]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58831198: mov dword ptr [ebp + eax - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x05
        __asm _emit 0xF8
        // 0x5883119C: push 0x588c1c60
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x1C
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x588311A1: call 0x58831086
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588311A6: nop
        __asm _emit 0x90
        // 0x588311A7: leave
        __asm _emit 0xC9
        // 0x588311A8: ret
        __asm _emit 0xC3
    }
}
