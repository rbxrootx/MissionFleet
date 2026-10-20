// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CCCB9 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_004cccb9_004CCCB9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c200h
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
        sub esp, 8
        mov dword ptr [ebp - 14h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 24 80 05 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 C1 7F 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x7f
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 AF 7F 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x7f
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4A FF FF FF: call 0x4ccc60
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F8 F7 FF FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        or ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B5 FB FF FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfb
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
