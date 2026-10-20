// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005699B5 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_005699b5_005699B5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x5699d6
        __asm _emit 0x75
        __asm _emit 0x11
        push 25h
        push 67c668h
        ; Exact mapped bytes E8 6F F3 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xf3
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5699d6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x5699bf
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 00 00 00: call 0x5699fe
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], ecx
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
