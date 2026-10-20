// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00576D7E .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_00576d7e_00576D7E() {
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
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], 0
        push 640cd0h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FC 3C FD FF: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x3c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x576dc5
        __asm _emit 0x75
        __asm _emit 0x14
        push 903h
        push 67cd14h
        ; Exact mapped bytes E8 80 1F FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x1f
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x576dc5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x576dab
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
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 F0 C2 68 00: call dword ptr [0x68c2f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
