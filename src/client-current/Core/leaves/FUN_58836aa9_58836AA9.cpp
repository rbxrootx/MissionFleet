// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58836AA9 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_58836aa9_58836AA9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push 588f0138h
        push 588f0148h
        mov dword ptr [ebp - 98h], 94h
        ; Exact mapped bytes FF 15 E0 42 89 58: call dword ptr [0x588942e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 BA 00 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        lea ecx, [ebp - 98h]
        push ecx
        ; Exact mapped bytes 0F 44 05 34 41 89 58: cmove eax, dword ptr [0x58894134]
        __asm _emit 0x0f
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        cmp dword ptr [ebp - 88h], 2
        ; Exact mapped bytes 75 22: jne 0x58836b19
        __asm _emit 0x75
        __asm _emit 0x22
        cmp dword ptr [ebp - 94h], 5
        ; Exact mapped bytes 75 15: jne 0x58836b15
        __asm _emit 0x75
        __asm _emit 0x15
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 75 0C: jne 0x58836b15
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes A1 E4 60 90 58: mov eax, dword ptr [0x589060e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        add eax, eax
        ; Exact mapped bytes A3 E4 60 90 58: mov dword ptr [0x589060e4], eax
        __asm _emit 0xa3
        __asm _emit 0xe4
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x58836b1b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2B A5 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
