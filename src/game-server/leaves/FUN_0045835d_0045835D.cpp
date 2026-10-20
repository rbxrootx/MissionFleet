// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045835D .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_0045835d_0045835D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b92dh
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 88 70 FF FF: call 0x44f410
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 581a70h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4F 00 00 00: call 0x4583ef
        __asm _emit 0xe8
        __asm _emit 0x4f
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
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 22 04 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
