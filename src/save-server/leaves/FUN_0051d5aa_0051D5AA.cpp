// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051D5AA .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_0051d5aa_0051D5AA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ed98h
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
        ; Exact mapped bytes E8 D2 40 FF FF: call 0x5116a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c8h
        ; Exact mapped bytes E8 24 77 00 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63ad4ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0c4h], 0
        ; Exact mapped bytes E8 18 00 00 00: call 0x51d61a
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
