// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E5B00 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_004e5b00_004E5B00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 11: jne 0x4e5b24
        __asm _emit 0x75
        __asm _emit 0x11
        push 1ch
        push 6725c8h
        ; Exact mapped bytes E8 21 32 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e5b24
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e5b0a
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        push 0
        push 10h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 FE 5A 04 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5a
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
