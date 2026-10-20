// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E66E4 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_004e66e4_004E66E4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 0c8h
        push 5c7c98h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 5D 4A 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x4e67b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 8], 3fffffffh
        ; Exact mapped bytes 76 14: jbe 0x4e6735
        __asm _emit 0x76
        __asm _emit 0x14
        push 0ceh
        push 5c7c98h
        ; Exact mapped bytes E8 D0 E2 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e6735
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4e6715
        __asm _emit 0x75
        __asm _emit 0xda
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 42: je 0x4e678d
        __asm _emit 0x74
        __asm _emit 0x42
        push 0d3h
        push 5c7c98h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 CF 68 00 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        shl edx, 2
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 96 28 FC FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 6A 6C 00 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 0ch], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
