// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437630 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_00437630_00437630() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bd30h
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
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov byte ptr [edx], 0
        ; Exact mapped bytes EB 09: jmp 0x437676
        __asm _emit 0xeb
        __asm _emit 0x09
        push 0
        push 0
        ; Exact mapped bytes E8 AA E2 02 00: call 0x465920
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
