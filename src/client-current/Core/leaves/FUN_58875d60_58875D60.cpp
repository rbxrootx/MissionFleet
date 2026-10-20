// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58875D60 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_58875d60_58875D60() {
    __asm {
        push ebp
        mov ebp, esp
        push edi
        push esi
        push ebx
        mov ecx, dword ptr [ebp + 10h]
        or ecx, ecx
        ; Exact mapped bytes 74 4D: je 0x58875dba
        __asm _emit 0x74
        __asm _emit 0x4d
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 0ch]
        mov bh, 41h
        mov bl, 5ah
        mov dh, 20h
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ah, byte ptr [esi]
        or ah, ah
        mov al, byte ptr [edi]
        ; Exact mapped bytes 74 27: je 0x58875dab
        __asm _emit 0x74
        __asm _emit 0x27
        or al, al
        ; Exact mapped bytes 74 23: je 0x58875dab
        __asm _emit 0x74
        __asm _emit 0x23
        add esi, 1
        add edi, 1
        cmp ah, bh
        ; Exact mapped bytes 72 06: jb 0x58875d98
        __asm _emit 0x72
        __asm _emit 0x06
        cmp ah, bl
        ; Exact mapped bytes 77 02: ja 0x58875d98
        __asm _emit 0x77
        __asm _emit 0x02
        add ah, dh
        cmp al, bh
        ; Exact mapped bytes 72 06: jb 0x58875da2
        __asm _emit 0x72
        __asm _emit 0x06
        cmp al, bl
        ; Exact mapped bytes 77 02: ja 0x58875da2
        __asm _emit 0x77
        __asm _emit 0x02
        add al, dh
        cmp ah, al
        ; Exact mapped bytes 75 0B: jne 0x58875db1
        __asm _emit 0x75
        __asm _emit 0x0b
        sub ecx, 1
        ; Exact mapped bytes 75 D1: jne 0x58875d7c
        __asm _emit 0x75
        __asm _emit 0xd1
        xor ecx, ecx
        cmp ah, al
        ; Exact mapped bytes 74 09: je 0x58875dba
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, 0ffffffffh
        ; Exact mapped bytes 72 02: jb 0x58875dba
        __asm _emit 0x72
        __asm _emit 0x02
        neg ecx
        mov eax, ecx
        pop ebx
        pop esi
        pop edi
        leave
        ret
    }
}
