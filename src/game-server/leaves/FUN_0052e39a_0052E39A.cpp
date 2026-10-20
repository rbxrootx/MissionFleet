// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052E39A .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_0052e39a_0052E39A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f2b8h
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
        ; Exact mapped bytes E8 E2 BB FF FF: call 0x529fa0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c8h
        ; Exact mapped bytes E8 34 2B 00 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588724h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0c4h], 0
        ; Exact mapped bytes E8 18 00 00 00: call 0x52e40a
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
