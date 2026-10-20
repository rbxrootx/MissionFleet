// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D4071 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_004d4071_004D4071() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 108h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 108h], ecx
        mov dword ptr [ebp - 104h], 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d40b5
        __asm _emit 0x75
        __asm _emit 0x14
        push 12dh
        push 5c64b4h
        ; Exact mapped bytes E8 50 09 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d40b5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4d408d
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 0ch], 100h
        ; Exact mapped bytes 7C 14: jl 0x4d40d8
        __asm _emit 0x7c
        __asm _emit 0x14
        push 12eh
        push 5c64b4h
        ; Exact mapped bytes E8 2D 09 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d40d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4d40bb
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 100h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        or edx, 1000000h
        push edx
        push 412h
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF 97 01 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 104h]
        or al, 1
        mov dword ptr [ebp - 104h], eax
        mov eax, dword ptr [ebp + 8]
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
