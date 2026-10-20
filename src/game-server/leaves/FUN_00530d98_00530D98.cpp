// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00530D98 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_00530d98_00530D98() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 61h
        push 5820d4h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 AE A3 FC FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 75 F0 F9 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf0
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x530dd2
        __asm _emit 0x75
        __asm _emit 0x11
        push 62h
        push 5820d4h
        ; Exact mapped bytes E8 33 3C 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x530dd2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x530db2
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ch
        ; Exact mapped bytes E8 16 CD FB FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xcd
        __asm _emit 0xfb
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
