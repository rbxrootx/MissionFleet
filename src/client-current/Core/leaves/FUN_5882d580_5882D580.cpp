// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882D580 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_5882d580_5882D580() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5882d59b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 10000h
        ; Exact mapped bytes 7D 46: jge 0x5882d5ea
        __asm _emit 0x7d
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 25: je 0x5882d5db
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        push 0ch
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 64 3A 00 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB D5: jmp 0x5882d5b0
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax*4], 0
        ; Exact mapped bytes EB A8: jmp 0x5882d592
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov esp, ebp
        pop ebp
        ret
    }
}
