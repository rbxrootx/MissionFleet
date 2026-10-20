// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FFF4A .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_004fff4a_004FFF4A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        push 345h
        push 6756ach
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 FA A2 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xa2
        __asm _emit 0xfd
        __asm _emit 0xff
        push 346h
        push 6756ach
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 E7 A2 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa2
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 46 22 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 39 24 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C9 BB 02 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 16 00 00 00: call 0x4fffb8
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 19 03 00 00: call 0x5002cb
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
