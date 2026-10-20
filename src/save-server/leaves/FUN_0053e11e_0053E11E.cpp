// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053E11E .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_0053e11e_0053E11E() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c5dfh
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
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 6357ech
        mov dword ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 97 E7 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 88 E7 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18h
        ; Exact mapped bytes E8 79 E7 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14h
        ; Exact mapped bytes E8 6A E7 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 16 66 FE FF: call 0x5247a7
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
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
        ret
    }
}
