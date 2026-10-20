// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E7C50 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_004e7c50_004E7C50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 76 06: jbe 0x4e7c65
        __asm _emit 0x76
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 77 11: ja 0x4e7c76
        __asm _emit 0x77
        __asm _emit 0x11
        push 1eh
        push 5c92d0h
        ; Exact mapped bytes E8 8F CD 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xcd
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7c76
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4e7c59
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1fh
        push 5c92d0h
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, dword ptr [ebp + 10h]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 A0 53 00 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
