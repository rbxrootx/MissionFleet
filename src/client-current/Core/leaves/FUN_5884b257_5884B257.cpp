// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884B257 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_5884b257_5884B257() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 6afach
        ; Exact mapped bytes E8 8C 68 FE FF: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov edi, ecx
        lea ecx, [ebp - 6afach]
        ; Exact mapped bytes E8 3D DC FF FF: call 0x58848eba
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [edi + 4ch]
        and dword ptr [ebp - 8], 0
        mov byte ptr [ebp - 6afa4h], al
        xor eax, eax
        push 1
        ; Exact mapped bytes 66 89 85 D2 5E F9 FF: mov word ptr [ebp - 0x6a12e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0x5e
        __asm _emit 0xf9
        __asm _emit 0xff
        lea eax, [edi + 74h]
        push 4000h
        push eax
        lea eax, [ebp - 6afach]
        mov dword ptr [ebp - 6afa0h], 5884c7ebh
        push eax
        mov dword ptr [ebp - 6af9ch], 5884c7c4h
        mov dword ptr [ebp - 6afach], edi
        mov dword ptr [ebp - 6afa8h], 8
        ; Exact mapped bytes E8 92 E8 FF FF: call 0x58849b60
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 8]
        lea eax, [esi + 2ah]
        push eax
        lea eax, [ebp - 6afach]
        push eax
        ; Exact mapped bytes E8 91 EF FF FF: call 0x5884a272
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 4]
        push eax
        push dword ptr [ebp - 6afa8h]
        lea eax, [ebp - 6afach]
        push eax
        ; Exact mapped bytes E8 F5 00 00 00: call 0x5884b3ec
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 6afach]
        push eax
        ; Exact mapped bytes E8 6A F3 FF FF: call 0x5884a66d
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add esp, 28h
        mov dword ptr [edi + 70h], eax
        mov eax, dword ptr [ebp - 8]
        neg eax
        pop edi
        sbb eax, eax
        xor ecx, ebp
        and eax, 5000000h
        pop esi
        ; Exact mapped bytes E8 2F 5D FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
