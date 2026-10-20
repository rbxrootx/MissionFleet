// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044CD58 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_0044cd58_0044CD58() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x44cd7d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 14: jmp 0x44cd91
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A8 E8 0D 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
