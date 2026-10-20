// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10030000 .. +0xEC bytes.
extern "C" __declspec(naked) void FUN_10030000_10030000() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 2c4h]
        mov dword ptr [esi + 8ch], edi
        cmp ecx, edi
        mov dword ptr [esi + 98h], 40000000h
        mov dword ptr [esi + 90h], edi
        mov dword ptr [esi + 68h], 1
        ; Exact mapped bytes 74 0C: je 0x10030039
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 2c4h], edi
        mov ecx, dword ptr [esi + 2c8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003004f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 2c8h], edi
        mov ecx, dword ptr [esi + 2cch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10030065
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 2cch], edi
        mov ecx, dword ptr [esi + 2d8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003007b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 2d8h], edi
        cmp dword ptr [esi + 2f4h], edi
        ; Exact mapped bytes 74 42: je 0x100300c5
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [esi + 2f8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10030099
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 2f8h], edi
        mov ecx, dword ptr [esi + 2fch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100300af
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 2fch], edi
        mov ecx, dword ptr [esi + 300h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100300c5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 300h], edi
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push edi
        ; Exact mapped bytes E8 DE 47 02 00: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 A2 D2 01 00: call 0x1004d380
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        push 1019816ch
        ; Exact mapped bytes FF 15 AC 50 17 10: call dword ptr [0x101750ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop esi
        ret
    }
}
