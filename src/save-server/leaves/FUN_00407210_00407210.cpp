// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00407210 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_00407210_00407210() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 9ch]
        mov ecx, 27h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], ecx
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 3
        push 80000000h
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        push eax
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 86 DB 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 52: je 0x4072c5
        __asm _emit 0x74
        __asm _emit 0x52
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 62 DB 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 5ch]
        push eax
        push 50h
        lea ecx, [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 43 DB 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 30 DB 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes EB 03: jmp 0x4072c8
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        add esp, 9ch
        cmp ebp, esp
        ; Exact mapped bytes E8 18 DB 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
