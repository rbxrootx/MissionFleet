// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00581C35 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_00581c35_00581C35() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e895h
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
        mov dword ptr [eax], 63a4ach
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 80 AC F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xac
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18h
        ; Exact mapped bytes E8 71 AC F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xac
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10h
        ; Exact mapped bytes E8 62 AC F4 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xac
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 63 2B FA FF: call 0x5247fc
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x2b
        __asm _emit 0xfa
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
