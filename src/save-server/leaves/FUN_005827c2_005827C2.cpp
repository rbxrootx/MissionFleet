// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005827C2 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_005827c2_005827C2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 11: je 0x5827e7
        __asm _emit 0x74
        __asm _emit 0x11
        push 7bh
        push 6788ach
        ; Exact mapped bytes E8 5E 65 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x65
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5827e7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x5827ce
        __asm _emit 0x75
        __asm _emit 0xe1
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 86 FC FF FF: call 0x582480
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 13: jge 0x582816
        __asm _emit 0x7d
        __asm _emit 0x13
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x582812
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], edx
        xor eax, eax
        ; Exact mapped bytes EB 10: jmp 0x582826
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 59 FE FF FF: call 0x58267f
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
