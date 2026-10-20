// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00516D19 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_00516d19_00516D19() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        push 33bh
        push 5c8b74h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 2B 44 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        push 33ch
        push 5c8b74h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 18 44 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 01 F0 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 12 F2 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9A 53 02 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 16 00 00 00: call 0x516d87
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
        ; Exact mapped bytes E8 19 03 00 00: call 0x51709a
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
