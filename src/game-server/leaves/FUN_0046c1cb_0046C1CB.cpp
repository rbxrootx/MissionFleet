// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046C1CB .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_0046c1cb_0046C1CB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bc2ch
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
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 581c78h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1a4h
        ; Exact mapped bytes E8 34 4D FA FF: call 0x410f40
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x4d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 20 09 02 00: call 0x48cb3b
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 B1 C5 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xc5
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
