// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DF42A .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_004df42a_004DF42A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ec90h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 124h
        mov dword ptr [ebp - 130h], ecx
        mov dword ptr [ebp - 12ch], 0
        push 45h
        push 6790dch
        mov eax, dword ptr [ebp - 130h]
        push eax
        ; Exact mapped bytes E8 F5 AD FF FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 128h]
        ; Exact mapped bytes E8 4A 30 01 00: call 0x4f24c0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 128h]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 E1 00 00 00: call 0x4df569
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 77 58 04 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        push 100h
        push 100h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 EF DB FE FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 116h]
        push edx
        ; Exact mapped bytes E8 C9 FB FF FF: call 0x4df07f
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 13 DD FE FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E D0 FE FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 12ch]
        or ecx, 1
        mov dword ptr [ebp - 12ch], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 05 D4 FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
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
