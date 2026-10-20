// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C32C0 .. +0x159 bytes.
extern "C" __declspec(naked) void FUN_587c32c0_587C32C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e060h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588be374h
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x587c33db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 74 1E: je 0x587c333f
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2ch]
        mov eax, dword ptr [eax]
        push edx
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2ch], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 74 1E: je 0x587c3366
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 28h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 28h]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 28h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 74 1E: je 0x587c338d
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 24h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 24h]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 24h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 1E: je 0x587c33b4
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [eax]
        push edx
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 20h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 1E: je 0x587c33db
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1ch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 74 1D: je 0x587c3401
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        ; Exact mapped bytes FF 15 28 41 89 58: call dword ptr [0x58894128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 18h]
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B7 06 00 00: call 0x587c3ac0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
