// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B1560 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_584b1560_584B1560() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 81 FF FF FF: call 0x584b1500
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        or edx, 1
        mov eax, dword ptr [eax + 4]
        push eax
        push edx
        ; Exact mapped bytes E8 71 4D 3A 00: call 0x588562ff
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x4d
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 1ch
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 09: jge 0x584b15a3
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0ffffffffh
        ; Exact mapped bytes EB 06: jmp 0x584b15a9
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
