// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053E072 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_0053e072_0053E072() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c5a8h
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FA 66 FE FF: call 0x524790
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14h
        ; Exact mapped bytes E8 5F 6C FE FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18h
        ; Exact mapped bytes E8 50 6C FE FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 41 6C FE FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 32 6C FE FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 6357ech
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
