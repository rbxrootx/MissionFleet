// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00575A6B .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_00575a6b_00575A6B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 6cah
        push 67cd14h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 D6 47 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x47
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 75 14: jne 0x575aaa
        __asm _emit 0x75
        __asm _emit 0x14
        push 6cdh
        push 67cd14h
        ; Exact mapped bytes E8 9B 32 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x32
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x575aaa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x575a8a
        __asm _emit 0x75
        __asm _emit 0xda
        push 640c20h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ach]
        push ecx
        ; Exact mapped bytes E8 32 4E FD FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x575ad1
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 23: jmp 0x575af4
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 34: call dword ptr [eax + 0x34]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x34
        neg eax
        sbb eax, eax
        inc eax
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
