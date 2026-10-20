// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DF35A .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_004df35a_004DF35A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ec63h
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
        push 38h
        push 6790dch
        mov eax, dword ptr [ebp - 130h]
        push eax
        ; Exact mapped bytes E8 C5 AE FF FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 128h]
        ; Exact mapped bytes E8 1A 31 01 00: call 0x4f24c0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 128h]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 B1 01 00 00: call 0x4df569
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 47 59 04 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        push 100h
        push 100h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 BF DC FE FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 116h]
        push edx
        ; Exact mapped bytes E8 5E 56 06 00: call 0x544a44
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E3 DD FE FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E D1 FE FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 12ch]
        or ecx, 1
        mov dword ptr [ebp - 12ch], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D5 D4 FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xd5
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
