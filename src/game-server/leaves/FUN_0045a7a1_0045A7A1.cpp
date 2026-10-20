// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045A7A1 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_0045a7a1_0045A7A1() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b9b5h
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
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3B 4C FF FF: call 0x44f410
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 440h
        ; Exact mapped bytes E8 B2 2E 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], 581a88h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CC 00 00 00: call 0x45a8cf
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 BF DF 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
