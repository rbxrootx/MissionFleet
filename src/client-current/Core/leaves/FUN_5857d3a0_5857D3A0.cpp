// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857D3A0 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_5857d3a0_5857D3A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 8B 0D 34 05 96 58: mov ecx, dword ptr [0x58960534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 15 30 05 96 58: mov edx, dword ptr [0x58960530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 80010f13h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A6 F5 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf5
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
