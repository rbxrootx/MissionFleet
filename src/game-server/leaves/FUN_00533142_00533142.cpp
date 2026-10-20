// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533142 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_00533142_00533142() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 F3 CC F9 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xcc
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x53317b
        __asm _emit 0x75
        __asm _emit 0x14
        push 15fh
        push 5820dch
        ; Exact mapped bytes E8 8A 18 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53317b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x533156
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
