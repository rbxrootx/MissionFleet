// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E583 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_0041e583_0041E583() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cld
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 4]
        and eax, 66h
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x41e5a6
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 24h], 1
        push 1
        pop eax
        ; Exact mapped bytes EB 4D: jmp 0x41e5f3
        __asm _emit 0xeb
        __asm _emit 0x4d
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push dword ptr [eax + 14h]
        mov eax, dword ptr [ebp + 0ch]
        push dword ptr [eax + 10h]
        mov eax, dword ptr [ebp + 0ch]
        push dword ptr [eax + 8]
        push 0
        push dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 0ch]
        push dword ptr [eax + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F 36 00 00: call 0x421bec
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 75 0B: jne 0x41e5e4
        __asm _emit 0x75
        __asm _emit 0x0b
        push dword ptr [ebp + 8]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 EB FD FF FF: call 0x41e3cf
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp + 0ch]
        mov esp, dword ptr [ebx + 1ch]
        mov ebp, dword ptr [ebx + 20h]
        ; Exact mapped bytes FF 63 18: jmp dword ptr [ebx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x63
        __asm _emit 0x18
        push 1
        pop eax
        pop edi
        pop esi
    }
}
