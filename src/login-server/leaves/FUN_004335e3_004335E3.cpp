// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004335E3 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_004335e3_004335E3() {
    __asm {
        mov eax, 43b27fh
        ; Exact mapped bytes E8 1B C0 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esp, 120h
        and dword ptr [ebp - 14h], 0
        lea eax, [ebp - 12ch]
        push esi
        push eax
        ; Exact mapped bytes E8 90 00 00 00: call 0x433694
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 54 A9 FF FF: call 0x42df75
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 11ah]
        push eax
        ; Exact mapped bytes E8 DD FE FF FF: call 0x43350b
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8C A9 FF FF: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 DC A2 FF FF: call 0x42d920
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], esi
        and byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 58 A5 FF FF: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x58
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
