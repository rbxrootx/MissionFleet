// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00576A90 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_00576a90_00576A90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d8h
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        push 640cd0h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 EA 3F FD FF: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x3f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x576ad7
        __asm _emit 0x75
        __asm _emit 0x14
        push 8b8h
        push 67cd14h
        ; Exact mapped bytes E8 6E 22 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x22
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x576ad7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x576abd
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 80 C2 68 00: call dword ptr [0x68c280]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
