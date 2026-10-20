// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433561 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_00433561_00433561() {
    __asm {
        mov eax, 43b253h
        ; Exact mapped bytes E8 9D C0 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esp, 120h
        and dword ptr [ebp - 14h], 0
        lea eax, [ebp - 12ch]
        push esi
        push eax
        ; Exact mapped bytes E8 12 01 00 00: call 0x433694
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 1
        mov eax, 100h
        pop esi
        lea ecx, [ebp - 10h]
        push eax
        push eax
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 D6 A9 FF FF: call 0x42df75
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 11ah]
        push eax
        ; Exact mapped bytes E8 65 3E 00 00: call 0x437411
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0E AA FF FF: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 5E A3 FF FF: call 0x42d920
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], esi
        and byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DA A5 FF FF: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
