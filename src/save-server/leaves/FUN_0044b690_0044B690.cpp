// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044B690 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_0044b690_0044B690() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d8c8h
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
        mov dword ptr [eax], 638e04h
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 60 0A 09 00: call 0x4dc124
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 5A C1 07 00: call 0x4c782d
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc1
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        ; Exact mapped bytes E8 48 C1 07 00: call 0x4c782d
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc1
        __asm _emit 0x07
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
        mov esp, ebp
        pop ebp
        ret
    }
}
