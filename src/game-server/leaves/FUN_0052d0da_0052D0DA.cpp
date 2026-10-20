// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052D0DA .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_0052d0da_0052D0DA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52d0ed
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F3: jne 0x52d0e6
        __asm _emit 0x75
        __asm _emit 0xf3
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x52d0fa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x52d0f3
        __asm _emit 0x75
        __asm _emit 0xf3
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x52d107
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x52d100
        __asm _emit 0x75
        __asm _emit 0xf3
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 02 FF FF FF: call 0x52d01e
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 21: je 0x52d146
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 1C FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 10000000h
        neg eax
        sbb eax, eax
        neg eax
        push eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 08: jmp 0x52d14e
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B E7 00 00: call 0x53b8e9
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
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
