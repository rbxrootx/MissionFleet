// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FEFDE .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_004fefde_004FEFDE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 101h
        push 5cb750h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 63 C1 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 75 14: jne 0x4ff01a
        __asm _emit 0x75
        __asm _emit 0x14
        push 102h
        push 5cb750h
        ; Exact mapped bytes E8 EB 59 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ff01a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4feffd
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 20: je 0x4ff046
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 74 1A: je 0x4ff046
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 14: je 0x4ff046
        __asm _emit 0x74
        __asm _emit 0x14
        push 103h
        push 5cb750h
        ; Exact mapped bytes E8 BF 59 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ff046
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x4ff020
        __asm _emit 0x75
        __asm _emit 0xd4
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4ff053
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4ff04c
        __asm _emit 0x75
        __asm _emit 0xf3
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 0E: jne 0x4ff087
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 49 C8 FF FF: call 0x4fb8d0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
