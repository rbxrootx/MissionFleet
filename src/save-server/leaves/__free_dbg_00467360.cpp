// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00467360 .. +0x52 bytes.
extern "C" __declspec(naked) void __free_dbg_00467360() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63e420h
        push 46d504h
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
        push ebx
        push esi
        push edi
        push 9
        ; Exact mapped bytes E8 26 95 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 2F 00 00 00: call 0x4673d0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 02 00 00 00: call 0x4673b2
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x4673bd
        __asm _emit 0xeb
        __asm _emit 0x0b
    }
}
