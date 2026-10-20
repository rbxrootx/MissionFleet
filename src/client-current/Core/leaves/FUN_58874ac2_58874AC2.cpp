// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874AC2 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_58874ac2_58874AC2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 22ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        lea ecx, [ebp - 210h]
        push 105h
        push ecx
        push eax
        ; Exact mapped bytes FF 15 04 42 89 58: call dword ptr [0x58894204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x58874b02
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 16 D9 FE FF: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        xor eax, eax
        ; Exact mapped bytes EB 55: jmp 0x58874b57
        __asm _emit 0xeb
        __asm _emit 0x55
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 10h]
        and dword ptr [ebp - 21ch], 0
        mov dword ptr [ebp - 22ch], ecx
        mov dword ptr [ebp - 228h], eax
        mov dword ptr [ebp - 224h], ecx
        mov dword ptr [ebp - 220h], eax
        mov byte ptr [ebp - 218h], 0
        ; Exact mapped bytes E8 F5 3A FE FF: call 0x58858628
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 211h]
        push eax
        lea eax, [ebp - 22ch]
        push eax
        lea eax, [ebp - 210h]
        push eax
        ; Exact mapped bytes E8 7E 3C FE FF: call 0x588587cc
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 21ch]
        add esp, 10h
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 EF C4 FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ret
    }
}
