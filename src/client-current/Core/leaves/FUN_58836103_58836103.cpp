// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58836103 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_58836103_58836103() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E8 30 61 00 00: call 0x5883c240
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 10h]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        movzx eax, byte ptr [eax]
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x58836146
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        push dword ptr [eax + 10h]
        push 588f01ach
        ; Exact mapped bytes E8 20 62 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        mov eax, dword ptr [ebp - 4]
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 49 3F 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 1A: jmp 0x58836160
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 588f01c4h
        ; Exact mapped bytes E8 03 62 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        mov eax, dword ptr [ebp - 4]
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 2C 3F 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes E8 F5 60 00 00: call 0x5883c25a
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
