// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58836A4C .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_58836a4c_58836A4C() {
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
        ; Exact mapped bytes E8 17 01 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x01
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
        mov ecx, dword ptr [ebp - 4]
        sete al
        xor ecx, ebp
        ; Exact mapped bytes E8 AB A5 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
