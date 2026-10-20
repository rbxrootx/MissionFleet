// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C11F0 .. +0xEC bytes.
extern "C" __declspec(naked) void FUN_587c11f0_587C11F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 75 22: jne 0x587c1227
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ecx + 88h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x587c12d8
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 DB 69 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x69
        __asm _emit 0xcc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x587c12d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 88h]
        ; Exact mapped bytes E8 C5 69 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x69
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 88h], eax
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 27: je 0x587c1294
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 74 19: je 0x587c1294
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 81 69 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x69
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB D3: jmp 0x587c1267
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 74 2A: je 0x587c12ca
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 46 CD FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 5ch]
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 7E 17: jle 0x587c12ca
        __asm _emit 0x7e
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 4F 69 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x69
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 84h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 3ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
