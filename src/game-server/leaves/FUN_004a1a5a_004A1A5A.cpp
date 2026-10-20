// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1A5A .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_004a1a5a_004A1A5A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f039h
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
        sub esp, 14h
        push 5cc050h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 99 30 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        push eax
        push 5cc06ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 30 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 65 32 09 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x32
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 1F AC 0A 00: call 0x54c6c9
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xac
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        push 8
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 BA B7 FF FF: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 5cc07ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4D 30 09 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C0 34 09 00: call 0x534f95
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C3 AA 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xaa
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
