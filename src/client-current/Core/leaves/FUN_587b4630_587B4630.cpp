// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4630 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_587b4630_587B4630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 CD 53 CF FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x53
        __asm _emit 0xcf
        __asm _emit 0xff
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 85 03 CD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0xcd
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 DC 16 D1 FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x16
        __asm _emit 0xd1
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 58 44 89 58: call dword ptr [0x58894458]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 0C D1 FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0c
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        or edx, 1
        mov dword ptr [ebp - 20h], edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 A8 56 CF FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x56
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 BB C9 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc9
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
