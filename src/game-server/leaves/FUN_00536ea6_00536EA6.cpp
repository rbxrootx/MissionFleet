// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00536EA6 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_00536ea6_00536EA6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 AC 21 5E 00: call dword ptr [0x5e21ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x536ee3
        __asm _emit 0x75
        __asm _emit 0x14
        push 18eh
        push 581fc0h
        ; Exact mapped bytes E8 22 DB FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x536ee3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x536eb2
        __asm _emit 0x75
        __asm _emit 0xc9
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 E7 FF FF: call 0x535661
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
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
